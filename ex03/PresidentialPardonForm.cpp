/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:35:21 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:54:53 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <cstdlib>

PresidentialPardonForm::PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5), _target("")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
: Form("PresidentialPardonForm", 25, 5), _target(src._target)
{
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	(void)rhs;
	return (*this);
}

const std::string		&PresidentialPardonForm::get_target(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (!this->_executable(executor.getGrade()))
		throw (Form::CantExecuteForm());
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}