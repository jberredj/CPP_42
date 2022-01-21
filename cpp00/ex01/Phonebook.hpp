/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 19:03:43 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 15:29:18 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"

class Phonebook
{
private:
	Contact	contacts[8];
	bool	_running;
	int		_nbr_added;

	void	_motd(void)	const;
	void	_exit_cmd(void);
	void	_add_cmd(void);
	void	_search_cmd(void);
	void	_print_registered_contacts(void) const;
	int		_valid_search_input(const std::string user_input) const;
	int		_list_and_prompt(void);
	bool	_command(std::string user_input);
public:
			Phonebook(void);
			~Phonebook(void);
	void 	loop(void);
};

#endif