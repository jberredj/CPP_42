/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:54:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 15:28:25 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain				*brain;
public:
						Dog(void);
						Dog(const Dog &src);
						~Dog();

	Dog					&operator=(const Dog &src);

	virtual void		makeSound(void) const;
	const std::string	get_idea(int index) const;
};

#endif