/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:31:24 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 11:45:08 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sstream>
#include <string>
#include "Sed.hpp"

void	Sed::_str_to_upper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
}

std::string	Sed::_generate_outfile_name(char *name)
{
	Sed::_str_to_upper(name);
	return (std::string(name).append(".replace"));
}

bool	Sed::_valid_params(char *name)
{
	if (std::string(name).empty())
	{
		std::cout << "filename can't be empty" << std::endl;
		return (false);
	}
	if (this->_to_replace.empty())
	{
		std::cout << "s1 can't be empty" << std::endl;
		return (false);
	}
	if (this->_replacement.empty())
	{
		std::cout << "s2 can't be empty" << std::endl;
		return (false);
	}
	return (true);
}

bool	Sed::_get_infile_content(char *name)
{
	std::ifstream		infile;
	std::stringstream	str_in;

	infile.open(name);
	if (!infile.is_open())
	{
		std::cout << "unable to open \"" << name << "\"" << std::endl;
		return (false);
	}
	str_in << infile.rdbuf();
	infile.close();
	this->_infile_content = str_in.str();
	return (true);
}

bool	Sed::_open_outfile(char *name)
{
	std::string			outfile_name;

	outfile_name = Sed::_generate_outfile_name(name);
	this->_outfile.open(outfile_name.c_str());
	if (!this->_outfile.is_open())
	{
		std::cout << "unable to open \"" << outfile_name << "\"" << std::endl;
		return (false);
	}
	return (true);
}

bool	Sed::is_usable(void)
{
	return (this->_is_usable);
}

void	Sed::replace(void)
{
	size_t	infile_len;
	size_t	to_replace_len;

	infile_len = this->_infile_content.length();
	to_replace_len = this->_to_replace.length();
	for (size_t cursor_pos = 0; cursor_pos < infile_len; cursor_pos++)
	{
		if (this->_infile_content.compare(cursor_pos, to_replace_len,
			this->_to_replace) == 0)
		{
			this->_infile_content.erase(cursor_pos, to_replace_len);
			this->_infile_content.insert(cursor_pos, this->_replacement);
			infile_len = this->_infile_content.length();
		}
	}
	this->_dump_to_file();
}

void	Sed::_dump_to_file(void)
{
	this->_outfile << this->_infile_content;
}

Sed::Sed(char *av[3])
: _to_replace(av[1]), _replacement(av[2]), _is_usable(false)
{
	if (!this->_valid_params(av[0]))
		return ;
	if (!this->_get_infile_content(av[0]))
		return ;
	if (!this->_open_outfile(av[0]))
		return ;
	this->_is_usable = true;
}

Sed::~Sed()
{
	if (this->_outfile.is_open())
		this->_outfile.close();
}