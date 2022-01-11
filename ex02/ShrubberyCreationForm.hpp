/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 21:54:14 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:29:38 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATION_FORM
# define SHRUBBERYCREATION_FORM
# include <string>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	const std::string		_target;

							ShrubberyCreationForm(void);
public:
							ShrubberyCreationForm(const std::string &target);
							ShrubberyCreationForm(const ShrubberyCreationForm &src);
							~ShrubberyCreationForm(void);

	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &rhs);

	const std::string		&get_target(void) const;
	void					execute(const Bureaucrat &executor) const;

	class CantCreateShrugException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("CAN'T WRITE TO FILE");
		}
	};
};


#endif