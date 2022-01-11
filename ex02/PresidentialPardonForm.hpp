/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 22:33:45 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 22:50:42 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string>
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string		_target;

							PresidentialPardonForm(void);
public:
							PresidentialPardonForm(const std::string &target);
							PresidentialPardonForm(const PresidentialPardonForm &src);
							~PresidentialPardonForm(void);

	PresidentialPardonForm	&operator=(const PresidentialPardonForm &rhs);

	const std::string		&get_target(void) const;
	void					execute(const Bureaucrat &executor) const;
};
#endif