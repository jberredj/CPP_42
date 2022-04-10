/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:12:38 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:31:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int	select;

	select = rand() % 3;
	if (select == 0)
		return (new A());
	if (select == 1)
		return (new B());
	return (new C());
}

void	identify(Base *p)
{
	A	*a;
	B	*b;
	C	*c;

	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);
	if (a)
		std::cout << "A";
	if (b)
		std::cout << "B";
	if (c)
		std::cout << "C";
	std::cout << " identified" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B	&b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "B";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C	&c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "C";
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	std::cout << " identified" << std::endl;
}

int	main(void)
{
	Base	*base;

	std::cout << "Identify from Pointers" << std::endl;
	for (size_t i = 0; i < 15; i++)
	{
		base = generate();
		identify(base);
		delete (base);
	}
	std::cout << "Identify from Reference" << std::endl;
	for (size_t i = 0; i < 15; i++)
	{
		base = generate();
		identify(*base);
		delete (base);
	}
	
}