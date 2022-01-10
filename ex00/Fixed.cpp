/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:18:11 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 11:12:22 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed(void)
: _fixed(0)
{
	if (Fixed::_verbose_print)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	if (Fixed::_verbose_print)
		std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	if (Fixed::_verbose_print)
		std::cout << "Default destructor called" << std::endl;
}

Fixed				&Fixed::operator=(const Fixed &to_asign)
{
	if (Fixed::_verbose_print)
		std::cout << "Assignation operator called" << std::endl;
	this->_fixed = to_asign.getRawBits();
	return (*this);
}

int					Fixed::getRawBits(void) const
{
	if (Fixed::_verbose_print)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void				Fixed::setRawBits(int const raw)
{
	if (Fixed::_verbose_print)
		std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

void			Fixed::set_verbose(bool new_val)
{
	Fixed::_verbose_print = new_val;
}


const int	Fixed::_nbr_frac_bits = 8;
bool	Fixed::_verbose_print = true;