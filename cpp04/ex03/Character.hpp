/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:26:32 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 20:01:06 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	static const int	_max_inv = 4;
	std::string			_name;
	AMateria			*_inventory[Character::_max_inv];
	int					_loaded_materia;

						Character(void);
public:
						Character(std::string name);
						Character(const Character &src);
						~Character(void);

	Character			&operator=(const Character &rhs);

	std::string const	&getName() const;
	void				equip(AMateria* m);
	void				unequip(int idx);
	void				use(int idx, ICharacter& target);
};

#endif