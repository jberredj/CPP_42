/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:54:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 12:30:25 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : virtual public Animal
{
public:
					Dog(void);
					Dog(const Dog &src);
					~Dog();

	Dog				&operator=(const Dog &src);

	virtual void	makeSound(void) const;
};

#endif