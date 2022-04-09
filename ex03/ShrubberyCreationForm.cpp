/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:54:54 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:55:27 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137), _target("")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src)
: Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	(void)rhs;
	return (*this);
}

const std::string		&ShrubberyCreationForm::get_target(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	std::ofstream	file;
	std::string		file_name(this->_target + "_shrubbery");

	if (!this->_executable(executor.getGrade()))
		throw (Form::CantExecuteForm());
	file.open(file_name.c_str());
	if (!file.is_open())
		throw (ShrubberyCreationForm::CantCreateShrugException());
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file.close();
	std::cout << "Shrug " << this->_target << "_shrubbery created by "
		<< executor.getName() << std::endl;
}