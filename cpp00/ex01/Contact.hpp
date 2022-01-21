/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:10:23 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 15:40:58 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

enum
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUMBER,
	SECRET
};

class Contact
{
private:
	std::string					_informations[5];
	static const std::string	_field_name[5];

	bool						_set_phone(std::string &first_name);
	bool						_set_info(int index, std::string &info);
public:
								Contact(void);
								~Contact(void);
	bool						prompt_set(void);
	std::string					get_info(int index) const;
	static const std::string	get_field_name(int index);
	void						print_infos(void);
};
#endif