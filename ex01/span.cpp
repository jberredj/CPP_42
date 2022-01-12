/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:28:37 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 20:31:06 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <exception>
#include <algorithm>
#include <iterator>
#include "span.hpp"

Span::Span(void)
: _max_stored(0)
{
}

Span::Span(size_t nbr)
: _max_stored(nbr), _values(0)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span(void)
{
}

Span	&Span::operator=(const Span &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_max_stored = rhs._max_stored;
	this->_values = rhs._values;
	return (*this);
}

void	Span::addNumber(int nbr)
{
	if (_values.size() == this->_max_stored)
		throw (std::out_of_range("Span is full"));
	this->_values.push_back(nbr);
}

void	Span::it_addNumber(std::vector<int>::iterator begin,
							std::vector<int>::iterator end)
{
	std::vector<int>	i_vec(begin, end);

	if (this->_max_stored - this->_values.size() < i_vec.size())
		throw (std::out_of_range("Cannot add iterator range into span"));
	copy(i_vec.begin(), i_vec.end(), std::back_inserter(this->_values));
}

int	Span::shortest_span( void ) const
{
	std::vector<int>	sorted;
	int					shortest_find;

	if (_values.size() <= 1)
		throw (Span::NotEnough());
	sorted = this->_values;
	sort(sorted.begin(), sorted.end());
	shortest_find = abs(*(sorted.begin() + 1) - *(sorted.begin()));
	if (sorted.size() == 2)
		return (shortest_find);
	for (std::vector<int>::iterator it = (sorted.begin() + 1); it != sorted.end() && shortest_find; it++)
	{
		if (*(it + 1) - *it < shortest_find)
			shortest_find = abs(*(it + 1) - *it);
	}
	return (shortest_find);
}

int	Span::longest_span( void ) const
{
	std::vector<int>	sorted;

	if (_values.size() <= 1)
		throw (Span::NotEnough());
	sorted = this->_values;
	sort(sorted.begin(), sorted.end());
	return abs(*(sorted.end() - 1) - *(sorted.begin()));
}

int	Span::get_stored(void)
{
	return (this->_values.size());
}

int	Span::get_max_stored(void)
{
	return (this->_max_stored);
}