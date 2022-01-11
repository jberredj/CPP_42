/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:07:36 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:21:26 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

const int	Form::_lowest_grade = 150;
const int	Form::_highest_grade = 1;

void	Form::_valid_grade(int grade)
{
	if (grade < Form::_highest_grade)
		throw (Form::GradeTooHighException());
	else if (grade > Form::_lowest_grade)
		throw (Form::GradeTooLowException());
}

void	Form::_high_enough_grade(int required, int grade) const
{
	if (grade <= required)
		return ;
	throw (Form::GradeTooLowException());
}

bool	Form::_executable(int grade) const
{
	if (!this->_signed)
	{
		std::cout << "Form " << this->_name
			<< " need to be signed before execution, a bureaucrat of grade "
			<< this->_min_grade_exec << " is required" << std::endl;
		return (false);
	}
	this->_high_enough_grade(this->_min_grade_exec, grade);
	return (true);
}

Form::Form(void)
:  _min_grade_sign(1), _min_grade_exec(1), 
_name("Default"), _signed(false)
{
}

Form::Form(const std::string &name)
: _min_grade_sign(1), _min_grade_exec(1),
	_name(name), _signed(false)
{
}

Form::Form(const std::string &name, int min_grade_sign)
: _min_grade_sign(min_grade_sign), _min_grade_exec(1),
	 _name(name), _signed(false)
{
	this->_valid_grade(this->_min_grade_sign);
}

Form::Form(const std::string &name, int min_grade_sign, int min_grade_exec)
: _min_grade_sign(min_grade_sign), _min_grade_exec(min_grade_exec),
	_name(name), _signed(false)
{
	this->_valid_grade(this->_min_grade_sign);
	this->_valid_grade(this->_min_grade_exec);
}

Form::Form(const Form &src)
:	_min_grade_sign(src._min_grade_sign),
	_min_grade_exec(src._min_grade_exec),
	_name(src._name), _signed(src._signed)
{
}

Form::~Form(void)
{
}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

const std::string	&Form::get_name(void) const
{
	return (this->_name);
}

bool	Form::get_signed(void) const
{
	return (this->_signed);
}

int	Form::get_min_grade_sign(void) const
{
	return (this->_min_grade_sign);
}

int	Form::get_min_grade_exec(void) const
{
	return (this->_min_grade_exec);
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (this->_signed)
	{
		std::cout << bureaucrat.getName() << " cannot sign form " << this->_name
			<< " because it's allready signed" << std::endl;
		return ;
	}
	try
	{
		this->_high_enough_grade(this->_min_grade_sign, bureaucrat.getGrade());
		this->_signed = true;
		std::cout << bureaucrat.getName() << " signs form " << this->_name << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << bureaucrat.getName() << " cannot sign " << this->_name
			<< " because " << e.what() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "Form " << form.get_name() << ", require grade "
		<< form.get_min_grade_sign() << " to sign, and grade "
		<< form.get_min_grade_exec() << " to execute";
	return (out);
}