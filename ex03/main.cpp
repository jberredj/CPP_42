/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 16:08:39 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 17:06:26 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->unequip(0);
	me->use(1, *bob);
	me->unequip(1);
	me->use(0, *bob);
	me->unequip(0);
	me->use(0, *bob);

	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("nope");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	for (int i = 0; i < 4; i++)
	{
		me->use(0, *bob);
		me->unequip(0);
	}
	delete bob;
	delete me;
	delete src;
	return 0;
}