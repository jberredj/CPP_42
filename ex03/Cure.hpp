/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:22:38 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 18:51:47 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
public:
						Cure(void);
						Cure(const Cure &src);
						~Cure(void);

	Cure				&operator=(const Cure &rhs);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter &target);
};

#endif