/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:18:12 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:56:20 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

void	Bureaucrat::_valid_grade(int grade)
{
	if (grade < Bureaucrat::_highest_grade)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > Bureaucrat::_lowest_grade)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(void)
: _name("A bureaucrat"), _grade(Bureaucrat::_lowest_grade)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
: _name(src._name), _grade(src._grade)
{
}

Bureaucrat::Bureaucrat(std::string name)
: _name(name), _grade(Bureaucrat::_lowest_grade)
{

}

Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
	_valid_grade(grade);
	this->_grade = grade;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::inc_grade(int to_inc)
{
	this->_valid_grade(this->_grade - to_inc);
	this->_grade -= to_inc;
}

void	Bureaucrat::dec_grade(int to_dec)
{
	{
	this->_valid_grade(this->_grade + to_dec);
	this->_grade += to_dec;
}
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", Bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}

const int	Bureaucrat::_lowest_grade = 150;
const int	Bureaucrat::_highest_grade = 1;