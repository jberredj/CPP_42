/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:07:46 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/06 15:44:24 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <ostream>
# include <string>
class Bureaucrat;

class Form
{
private:
	static const int	_lowest_grade;
	static const int	_highest_grade;
	const int			_min_grade_sign;
	const int			_min_grade_exec;
	const std::string	_name;
	bool				_signed;

	void				_valid_grade(int grade) const;
	void				_high_enough_grade(int required, int grade) const;
protected:
	bool				_executable(int grade) const;
public:
						Form(void);
						Form(const std::string &name);
						Form(const std::string &name, int min_grade_sign);
						Form(const std::string &name, int min_grade_sign, int min_grade_exec);
						Form(const Form &src);
	virtual				~Form(void);

	Form				&operator=(const Form &rhs);

	const std::string	&get_name(void) const;
	bool				get_signed(void) const;
	int					get_min_grade_sign(void) const;
	int					get_min_grade_exec(void) const;

	void				beSigned(Bureaucrat &bureaucrat);
	virtual void		execute(const Bureaucrat &executor) const = 0; 

/*
**	Exceptions
*/
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("GRADE TOO HIGH");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("GRADE TOO LOW");
		}
	};

	class AllreadSignedException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("form is allready signed");
		}
	};

	class CantExecuteForm : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("FORM CANNOT EXECUTE");
		}
	};
};

std::ostream	&operator<<(std::ostream &out, const Form &form);

#endif