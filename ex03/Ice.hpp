/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:21:46 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 18:51:43 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
						Ice(void);
						Ice(const Ice &src);
						~Ice(void);

	Ice					&operator=(const Ice &rhs);

	virtual AMateria*	clone(void) const;
	virtual void		use(ICharacter &target);
};

#endif