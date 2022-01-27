/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:18:11 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 11:33:38 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
: _fixed(0)
{
	if (Fixed::_verbose_print)
		std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int init_val)
: _fixed(init_val << Fixed::_nbr_frac_bits)
{
	if (Fixed::_verbose_print)
		std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float init_val)
: _fixed(roundf(init_val * (1 << this->_nbr_frac_bits)))
{
	if (Fixed::_verbose_print)
		std::cout << "Float constructor called" << std::endl;
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
		std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &to_asign)
{
	if (Fixed::_verbose_print)
		std::cout << "Assignation operator called" << std::endl;
	this->_fixed = to_asign.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	if (Fixed::_verbose_print)
		std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	if (Fixed::_verbose_print)
		std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_fixed >> this->_nbr_frac_bits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixed / (float)(1 << this->_nbr_frac_bits));
}

void	Fixed::set_verbose(bool new_val)
{
	Fixed::_verbose_print = new_val;
}


const int	Fixed::_nbr_frac_bits = 8;
bool	Fixed::_verbose_print = true;

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}