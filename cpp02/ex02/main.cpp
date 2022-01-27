/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:07:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 10:33:47 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void)
{
	Fixed 		a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed		c(12);
	Fixed const	d(c - 15);

	std::cout << "(a > b): " << (a > b) << std::endl;
	std::cout << "(a < b):" << (a < b) << std::endl;
	std::cout << "(a <= b):" << (a <= b) << std::endl;
	std::cout << "(a >= b):" << (a >= b) << std::endl;
	std::cout << "(a == b):" << (a == b) << std::endl;
	std::cout << "(a != b):" << (a != b) << std::endl;
	std::cout << "(a + b):" << (a + b) << std::endl;
	std::cout << "(a - b):" << (a - b) << std::endl;
	std::cout << "(a * b):" << (a * b) << std::endl;
	std::cout << "(a / b):" << (a / b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "(const)min(b, c): " << Fixed::min(b, c) << std::endl;
	std::cout << "(const)max(b, c): " << Fixed::max(b, c) << std::endl;
	std::cout << "operator<< a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "--c: " << --c << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "c: " << c << std::endl;
	return 0;
}
