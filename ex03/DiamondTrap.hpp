/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:53:06 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 11:48:12 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
private:
	std::string	_name;
public:
				DiamondTrap(void);
				DiamondTrap(const DiamondTrap &src);
				DiamondTrap(const std::string name);
				~DiamondTrap(void);

	DiamondTrap	&operator=(const DiamondTrap &src);

	void		whoAmI(void);
};

#endif