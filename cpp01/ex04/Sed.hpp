/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 08:31:43 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 09:45:36 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP
# include <string>
# include <iostream>
# include <fstream>

class Sed
{
private:
	const std::string	_to_replace;
	const std::string	_replacement;
	std::string			_infile_content;
	std::ofstream		_outfile;
	bool				_is_usable;

	static std::string	_generate_outfile_name(char *name);
	static void			_str_to_upper(char *str);
	bool				_valid_params(char *name);
	bool				_get_infile_content(char *name);
	bool				_open_outfile(char *name);
	void				_dump_to_file(void);
public:
						Sed(char *av[3]);
						~Sed();
	bool				is_usable(void);
	void				replace(void);
};

#endif