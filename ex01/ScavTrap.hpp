/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:05:07 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 11:26:49 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
public:
			ScavTrap(void);
			ScavTrap(const ScavTrap &src);
			ScavTrap(const std::string name);
			~ScavTrap(void);

	ScavTrap	&operator=(const ScavTrap &src);

	void	guardGate(void);
};


#endif