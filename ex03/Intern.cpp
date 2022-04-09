/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:08:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 23:38:50 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Form	*Intern::_new_shrub_request(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::_new_robot_request(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form	*Intern::_new_presi_request(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Intern::Intern(void)
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

Intern::~Intern(void)
{
}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string request, std::string target)
{
	Intern::new_form_t	new_func;

	new_func = NULL;
	for (int i = 0; i < 4; i++)
		if (Intern::type_request[i].request_str.compare(request) == 0)
			new_func = Intern::type_request[i].new_func;
	if (!new_func)
	{
		std::cout << "Intern did not find suitable form, maybe we should fire him..." << std::endl;		
		return (NULL);
	}
	std::cout << "Intern creates form " << request << std::endl;
	return (this->*new_func)(target);
}

const Intern::requests_t	Intern::type_request[4] =
{
	{"shrubbery request", &Intern::_new_shrub_request},
	{"robotomy request", &Intern::_new_robot_request},
	{"presidential request", &Intern::_new_presi_request},
	{"", NULL}
};