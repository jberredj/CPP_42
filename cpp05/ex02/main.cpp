/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:16:52 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/06 15:39:11 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat				lvl_50_boss("Mafia Boss", 1);
	Bureaucrat				lvl_1_crook("Crook", 150);
	ShrubberyCreationForm	form("a_tree");
	RobotomyRequestForm		robot("Crook");
	PresidentialPardonForm	pardon("Mafia Boss");

	lvl_1_crook.signForm(form);	
	lvl_50_boss.signForm(form);
	lvl_50_boss.signForm(form);
	try
	{
		lvl_1_crook.executeForm(form);
		lvl_50_boss.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	lvl_50_boss.signForm(robot);
	try
	{
		lvl_1_crook.executeForm(robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	for (int i = 0; i < 15; i++)
		lvl_50_boss.executeForm(robot);
	lvl_1_crook.inc_grade(149);
	lvl_1_crook.signForm(pardon);
	lvl_1_crook.executeForm(pardon);
	return (0);
}