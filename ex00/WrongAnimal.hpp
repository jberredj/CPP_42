/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 21:52:53 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 22:18:07 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <string>

class WrongAnimal
{
protected:
	std::string			type;
public:
						WrongAnimal(void);
	virtual				~WrongAnimal();

	virtual void		makeSound(void) const;
	const std::string	&getType(void) const;
};

#endif