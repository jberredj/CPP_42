/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 18:44:10 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 15:49:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

Contact::Contact(void)
{
	for (int i = 0; i <= SECRET; i++)
		this->_informations[i] = std::string();
}

Contact::~Contact(void)
{}

bool	Contact::_set_phone(std::string &info)
{
	size_t	len;

	len = info.length();
	for (size_t i = 0; i < len; i++)
	{
		if ((info[i] < '0' || info[i] > '9') && info[i] != '+' && info[i] != '-')
			len = 0;
	}
	if (len == 0)
	{
		std::cout << "Please enter a valid phone number" << std::endl;
		return (false);
	}
	this->_informations[PHONE_NUMBER] = info;
	return (true);
}

bool	Contact::_set_info(int index, std::string &info)
{
	if (info.length() == 0)
	{
		std::cout << "Please enter a valid " << Contact::get_field_name(index) << std::endl;
		return (false);
	}
	if (index == PHONE_NUMBER)
		return (this->_set_phone(info));
	this->_informations[index] = info;
	return (true);
}

bool	Contact::prompt_set(void)
{
	int			i;
	std::string	user_input;
	bool		successfully_added = false;

	i = 0;
	while (i <= SECRET && !std::cin.eof())
	{
		successfully_added = false;
		while (!successfully_added && !std::cin.eof())
		{
			user_input = std::string();
			std::cout << Contact::get_field_name(i) << ": ";
			std::getline(std::cin, user_input);
			if (!std::cin.eof())
				successfully_added = this->_set_info(i, user_input);
			else
				std::cout << std::endl;
		}
		i++;
	}
	return (successfully_added);
}

std::string	Contact::get_info(int index) const
{
	if (index < 0 || index > SECRET)
		return (std::string("Index out of range"));
	return (this->_informations[index]);
}

const std::string	Contact::get_field_name(int index)
{
	if (index < 0 || index > SECRET)
		return (std::string("Invalid field"));
	return (Contact::_field_name[index]);
}

void	Contact::print_infos(void)
{
	for (int i = 0; i <= SECRET; i++)
	{
		std::cout << std::setw(14) << std::setfill(' ');
		std::cout << Contact::get_field_name(i) << ": " << this->get_info(i) << std::endl;
	}
}

const std::string	Contact::_field_name[5] = {
	"First name",
	"Last name",
	"Nickname",
	"Phone number",
	"Darkest secret"
};