/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 20:37:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/06 16:21:15 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>

template<typename T>
class MutantStack: public std::stack<T>
{

public:

	MutantStack<T>(void)
	{
		return;
	}

	MutantStack<T>(const MutantStack<T> &src)
	{
		*this = src;
	}
	~MutantStack<T>(void)
	{
		return;
	}

	MutantStack<T>	&operator=( const MutantStack<T> &rhs )
	{
		(void)rhs;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin(void)
	{
		return this->c.begin();
	}

	iterator	rbegin(void)
	{
		return this->c.rbegin();
	}

	const iterator	cbegin(void)
	{
		return this->c.cbegin();
	}

	const iterator	crbegin(void)
	{
		return this->c.crbegin();
	}

	iterator	end(void)
	{
		return this->c.end();
	}

	iterator	rend(void)
	{
		return this->c.rend();
	}

	const iterator	cend(void)
	{
		return this->c.cend();
	}

	const iterator	crend(void)
	{
		return this->c.crend();
	}

private:

};

#endif