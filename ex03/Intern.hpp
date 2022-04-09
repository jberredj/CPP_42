/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 23:08:32 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 23:23:02 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include <string>
# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	typedef Form			*(Intern::*new_form_t)(std::string);
	typedef struct			requests_s
	{
		std::string			request_str;
		new_form_t			new_func;
	}						requests_t;
	static const requests_t	type_request[4];

	Form					*_new_shrub_request(std::string target);
	Form					*_new_robot_request(std::string target);
	Form					*_new_presi_request(std::string target);
public:
							Intern(void);
							Intern(const Intern &src);
							~Intern(void);

	Intern					&operator=(const Intern &rhs);

	Form					*makeForm(std::string request, std::string target);
};

#endif