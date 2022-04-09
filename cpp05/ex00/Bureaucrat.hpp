/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 20:17:15 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:48:33 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <exception>
# include <string>
# include <ostream>

class Bureaucrat
{
private:
	static const int	_lowest_grade;
	static const int	_highest_grade;
	const std::string	_name;
	int					_grade;

	void				_valid_grade(int grade);
public:
						Bureaucrat(void);
						Bureaucrat(const Bureaucrat &src);
						Bureaucrat(std::string name);
						Bureaucrat(std::string name, int grade);
						~Bureaucrat(void);

	Bureaucrat	&operator=(const Bureaucrat &rhs);

	const std::string	&getName(void) const;
	int					getGrade(void) const;
	void				inc_grade(int to_inc);
	void				dec_grade(int to_dec);
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
};

std::ostream			&operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif