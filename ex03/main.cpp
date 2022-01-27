/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:07:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 17:37:05 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
	Point A(-0.3f, 0.9);
	Point B(3.2f, 2.7f);
	Point C(-0.9f, 3.4f);
	Point D(1.0f, 2.5f);
	Point E(0.7f, 2.2f);
	Point F(1.2f, 3.1f);
	Point G(1.6f, 1.6f);
	Point H(-0.6f, 2.2f);
	Point I(2.3f, 1.4f);
	Point J(1.4f, 3.8f);
	Point K(-0.9f, 2.0f);
	Point L(1.0f, 2.3f);

	std::cout << "D is ";
	if (!bsp(A, B, C, D))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "E is ";
	if (!bsp(A, B, C, E))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "F is ";
	if (!bsp(A, B, C, F))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "G is ";
	if (!bsp(A, B, C, G))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "H is ";
	if (!bsp(A, B, C, H))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "I is ";
	if (!bsp(A, B, C, I))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "J is ";
	if (!bsp(A, B, C, J))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "K is ";
	if (!bsp(A, B, C, K))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	std::cout << "L is ";
	if (!bsp(A, B, C, L))
		std::cout << "not ";
	std::cout << "in triangle ABC" << std::endl;
	return 0;
}
