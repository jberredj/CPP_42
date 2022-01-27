/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:07:02 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 16:00:20 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

Animal	*new_dog(void)
{
	return (new Dog());
}

Animal	*new_cat(void)
{
	return (new Cat());
}

typedef	Animal *(*new_animal)(void);

int main()
{
	{
		// const Animal* meta = new Animal(); // can't directly instantiate animal anymore
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j->makeSound();
		// meta->makeSound();
		// delete (meta);
		delete (j);
		j = i;
		j->makeSound();
		delete (i);
	}
	{
		new_animal		new_func[2];
		new_func[0] = new_dog;
		new_func[1] = new_cat;
		const Animal	*Zoo[100];

		for (int i = 0; i < 100; i++)
		{
			Zoo[i] = new_func[i % 2]();
			Zoo[i]->makeSound();
		}
		for (int i = 0; i < 100; i++)
			delete Zoo[i];
	}
	
	return (0);
}