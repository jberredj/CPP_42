/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:16:52 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 09:33:01 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	lvl_50_boss("Mafia Boss", 1);
	Intern		slave;
	Form		*form;

	form = slave.makeForm("not a form", "Somebody");
	if (!form)
	{
		std::cout << "YOU WILL BE FIRED" << std::endl;
	}
	form = slave.makeForm("shrubbery request", "Test");
	std::cout << *form <<  std::endl;
	form->beSigned(lvl_50_boss);
	lvl_50_boss.executeForm(*form);
	delete (form);
	form = slave.makeForm("robotomy request", "Crook");
	std::cout << *form <<  std::endl;
	form->beSigned(lvl_50_boss);
	lvl_50_boss.executeForm(*form);
	delete (form);
	return (0);
}