/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 17:06:52 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 21:08:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <cstdlib>
# include <cstddef>
# include <exception>

template<typename T>
class Array
{
private:
	size_t	_size;
	T		*_array;

public:
	Array<T>(void)
	: _size(0), _array(NULL)
	{
	}

	Array<T>(const size_t size)
	: _size(size)
	{
		if (size < 0)
			throw (std::underflow_error("Array size can't be negative"));
		this->_array = new T[size];
	}

	Array<T>(const Array<T> &src)
	{
		this->_size = src._size;
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = src._array[i];
	}

	~Array<T>(void)
	{
		if (this->_size > 0)
			delete [] (this->_array);
	}

	Array<T>	&operator=(const Array<T> &rhs)
	{
		if (this == &rhs)
			return (*this);
		if (this->_size > 0)
			delete [] (this->_array);
		this->_size = rhs._size;
		this->_array = new T[this->_size];
		for (size_t i = 0; i < this->_size; i++)
			this->_array[i] = rhs._array[i];
		return (*this);
	}

	T			&operator[](const int id) const
	{
		if (id < 0)
			throw (std::underflow_error("Index before array"));
		else if ((size_t)id >= this->_size)
			throw (std::overflow_error("Index after Array"));
		return (this->_array[id]);
	}

	size_t	size(void) const
	{
		return (this->_size);
	}
};

#endif