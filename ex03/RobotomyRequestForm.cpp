/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:35:21 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/09 21:05:38 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void)
: Form("RobotomyRequestForm", 72, 45), _target("")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
: Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	(void)rhs;
	return (*this);
}

const std::string		&RobotomyRequestForm::get_target(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!this->_executable(executor.getGrade()))
		throw (Form::CantExecuteForm());
	std::cout << "*Brrrr bzzzbrrr BZZZBRR*" << std::endl;
	if (std::rand() % 2)
		std::cout << this->_target << " has been robotomized" << std::endl;
	else
		std::cout << "Oh shish, robotomy failed, we need to dispose of the failure..." << std::endl;
}