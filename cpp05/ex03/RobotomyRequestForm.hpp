/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:33:45 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:50:42 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	const std::string		_target;

							RobotomyRequestForm(void);
public:
							RobotomyRequestForm(const std::string &target);
							RobotomyRequestForm(const RobotomyRequestForm &src);
							~RobotomyRequestForm(void);

	RobotomyRequestForm		&operator=(const RobotomyRequestForm &rhs);

	const std::string		&get_target(void) const;
	void					execute(const Bureaucrat &executor) const;
};
#endif