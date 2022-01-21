/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 10:42:29 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 16:01:32 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include "Phonebook.hpp"

Phonebook::Phonebook(void)
: _running(true), _nbr_added(0)
{}

Phonebook::~Phonebook(void)
{}

void	Phonebook::_motd(void) const
{
	std::cout << "╔═╦═╗────╔══╗────╔═╗─────────╔═╦╗───────╔╗────╔╗" << std::endl;
	std::cout << "║║║║╠╦╗  ║╔╗╠╦╦╦═╣═╬═╦══╦═╗  ║╬║╚╦═╦═╦╦═╣╚╦═╦═╣╠╗" << std::endl;
	std::cout << "║║║║║║║  ║╠╣║║║║╩╬═║╬║║║║╩╣  ║╔╣║║╬║║║║╩╣╬║╬║╬║═╣" << std::endl;
	std::cout << "╚╩═╩╬╗║  ╚╝╚╩══╩═╩═╩═╩╩╩╩═╝  ╚╝╚╩╩═╩╩═╩═╩═╩═╩═╩╩╝" << std::endl;
	std::cout << "────╚═╝" << std::endl;
}

void	Phonebook::_exit_cmd(void)
{
	std::string	user_input;
	bool		valid_input;

	std::cout << "Warning: All contacts will be lost" << std::endl
		<< "Are you sure you want to exit ? y/n" << std::endl;
	valid_input = false;
	while (!valid_input && !std::cin.eof())
	{
		std::cout << "> ";
		user_input = std::string();
		std::getline(std::cin, user_input);
		if (user_input.compare("y") == 0 || user_input.compare("n") == 0)
		{
			valid_input = true;
			if (user_input.compare("y") == 0)
				this->_running = false;
		}
		else if (!std::cin.eof())
			std::cout << user_input << ": is not a valid input" << std::endl
				<< "Are you sure you want to exit ? y/n" << std::endl;
		else
			std::cout << std::endl;
	}

}

void	Phonebook::_add_cmd(void)
{
	int			selected;

	selected = this->_nbr_added + 1;
	if (this->_nbr_added == 8)
	{
		std::cout << "Phonebook is full" << std::endl
			<< "Please select a contact to overwrite" << std::endl;
		selected = this->_list_and_prompt();
		if (selected == -1)
			return ;
	}
	this->contacts[selected - 1].prompt_set();
	if (this->_nbr_added < 8)
		this->_nbr_added++;
}

void	Phonebook::_print_registered_contacts(void) const
{
	std::string	info;

	std::cout << "Index|First name| Last name|  Nickname" << std::endl;
	for (int i = 0; i < this->_nbr_added; i++)
	{
		std::cout << std::setw(5) << std::setfill(' ') << i + 1;
		for (int j = 0; j < 3; j++)
		{
			std::cout << "|";
			info = this->contacts[i].get_info(j).substr(0, 10);
			if (info.length() >= 10)
				info[9] = '.';
			std::cout << std::setw(10) << std::setfill(' ') << info;
		}
		std::cout << std::endl;
	}
}

int		Phonebook::_valid_search_input(const std::string user_input) const
{
	std::string	nbr_compare;

	if (std::cin.eof())
	{
		std::cout << std::endl;
		return (-1);
	}
	else if (user_input.compare("CANCEL") == 0)
		return (-1);
	else
	{
		nbr_compare = std::string("0");
		for (int i = 1; i <= this->_nbr_added; i++)
		{
			nbr_compare[0] = char(i + 48);
			if (user_input.compare(nbr_compare) == 0)
				return (i);
		}
	}
	return (0);
}

int		Phonebook::_list_and_prompt(void)
{
	std::string	user_input;
	bool		valid_input = false;
	int			selected;

	this->_print_registered_contacts();
	std::cout << "Please enter a number between 1 and " << this->_nbr_added
		<< " or CANCEL" << std::endl;
	while (!valid_input && !std::cin.eof())
	{
		std::cout << "> " ;
		std::getline(std::cin, user_input);
		selected = this->_valid_search_input(user_input);
		valid_input = (bool)selected;
		if (!valid_input)
			std::cout << user_input << "is not a valid input" << std::endl;
	}
	return (selected);
}

void	Phonebook::_search_cmd(void)
{
	int			selected = 1;
	
	if (this->_nbr_added == 0)
	{
		std::cout << "The Phonebook is empty, please add \
contacts using ADD command and try again" << std::endl;
		return ;
	}
	if (this->_nbr_added > 1)
	{
		selected = this->_list_and_prompt();
	}
	if (selected != -1)
		this->contacts[selected - 1].print_infos();
}

bool	Phonebook::_command(std::string user_input)
{
	if (user_input.compare("EXIT") == 0)
		this->_exit_cmd();
	else if (user_input.compare("ADD") == 0)
		this->_add_cmd();
	else if (user_input.compare("SEARCH") == 0)
		this->_search_cmd();
	else
		return (false);
	return (true);
}

void	Phonebook::loop(void)
{
	std::string	user_input;

	Phonebook::_motd();
	while (this->_running && !std::cin.eof())
	{
		user_input = std::string();
		std::cout << "> ";
		std::getline(std::cin, user_input);
		if (!std::cin.eof())
		{
			if (!this->_command(user_input))
				std::cout << user_input << ": is not a valid command" << std::endl
					<< "Commands: EXIT, ADD, SEARCH" << std::endl;
		}
		else
			std::cout << std::endl;
	}
	
}