/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:05:07 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 14:19:48 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
public:
				ScavTrap(void);
				ScavTrap(const ScavTrap &src);
				ScavTrap(const std::string name);
				~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &src);

	void		guardGate(void);
	void		attack(const std::string &target);
};


#endif