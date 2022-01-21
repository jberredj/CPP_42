/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:46:06 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 15:58:52 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	const std::string	_name;
	Weapon				&_weapon;
public:
	void				attack(void);
						HumanA(std::string name, Weapon &weapon);
						~HumanA();
};


#endif