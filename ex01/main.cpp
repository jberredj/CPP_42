/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:16:52 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 21:50:08 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	lvl_50_boss("Mafia Boss", 1);
	Bureaucrat	lvl_1_crook("Crook", 150);
	try
	{
		Bureaucrat	impostor("Traitor", 0);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "No one can replace the boss" << std::endl;
	}

	try
	{
		while (lvl_50_boss.getGrade() > 0)
		{
			lvl_50_boss.dec_grade(1);
			std::cout << lvl_50_boss << std::endl << "Lost a grade" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "The Boss can't be lower than the crook" << std::endl;
	}

	lvl_50_boss.inc_grade(149);

	try
	{
		while (lvl_1_crook.getGrade() > 0)
		{
			lvl_1_crook.inc_grade(1);
			std::cout << lvl_1_crook << std::endl << "Lost a grade" << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "The crook can't be higher than the boss" << std::endl;
	}
	try
	{
		Form	wrong("Wrong", 0, 1500);
	}
	catch(const std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	lvl_1_crook.dec_grade(149);
	Form	form("Laisser passer A-38", 15, 1);
	std::cout << form << std::endl;
	
	form.beSigned(lvl_1_crook);
	form.beSigned(lvl_50_boss);
	form.beSigned(lvl_50_boss);
	return (0);
}