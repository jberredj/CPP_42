/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:54:30 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 22:19:07 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "Animal.hpp"

class WrongCat : virtual public Animal
{
public:
					WrongCat(void);
					WrongCat(const WrongCat &src);
					~WrongCat();

	WrongCat		&operator=(const WrongCat &src);

	virtual void	makeSound(void) const;
};

#endif