/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:46:06 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 16:20:34 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
private:
	const std::string	_name;
	Weapon				*_weapon;
public:
	bool				setWeapon(Weapon &weapon);
	bool				attack(void);
						HumanB(std::string name);
						~HumanB();
};


#endif