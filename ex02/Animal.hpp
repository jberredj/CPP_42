/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:52:53 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 15:59:26 by ddiakova         ###   ########.fr       */
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

	virtual void		makeSound(void) const = 0;
	const std::string	&getType(void) const;
};

#endif