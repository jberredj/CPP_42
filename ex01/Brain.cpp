/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:25:35 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 15:12:44 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include <string>
#include "Brain.hpp"

Brain::Brain(void)
{
	std::ostringstream	int_str_stream;

	for (int i = 0; i < 100; i++)
	{
		int_str_stream.str("");
		int_str_stream << i;
		this->_ideas[i] = std::string("Idea num. ") += int_str_stream.str();
	}

}

Brain::Brain(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
}

Brain::~Brain(void)
{
	std::cout << "Brain deleted" << std::endl;
}

Brain &Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}