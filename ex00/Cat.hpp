/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:54:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 12:28:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : virtual public Animal
{
public:
					Cat(void);
					Cat(const Cat &src);
					~Cat();

	Cat				&operator=(const Cat &src);

	virtual void	makeSound(void) const;
};

#endif