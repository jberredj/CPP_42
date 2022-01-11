/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:52:53 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 15:36:29 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>

class Animal
{
protected:
	std::string			type;

						Animal(void);
public:
						Animal(const Animal &src);
	virtual				~Animal();

	Animal				&operator=(const Animal &src);

	virtual void		makeSound(void) const;
	const std::string	&getType(void) const;
};

#endif