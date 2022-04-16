/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:36:45 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/16 17:40:02 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include <string>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	MutantStack<std::string> strstk;

	strstk.push("Hi");
	strstk.push("I'm");
	strstk.push("a");
	strstk.push("test");

	MutantStack<std::string>::iterator new_it = strstk.begin();
	while (new_it != strstk.end())
	{
		std::cout << *new_it << " ";
		new_it++;
	}
	std::cout << std::endl;

	strstk.pop();
	strstk.pop();
	strstk.pop();
	new_it = strstk.begin();
	while (new_it != strstk.end())
	{
		std::cout << *new_it << " ";
		new_it++;
	}
	std::cout << std::endl;

	return 0;
}