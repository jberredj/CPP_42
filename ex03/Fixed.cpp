/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:18:11 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 17:31:22 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
: _fixed(0)
{
}

Fixed::Fixed(int init_val)
: _fixed(init_val << Fixed::_nbr_frac_bits)
{
}

Fixed::Fixed(float init_val)
: _fixed(roundf(init_val * (1 << this->_nbr_frac_bits)))
{
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::~Fixed()
{
}

Fixed	&Fixed::operator=(const Fixed &to_asign)
{
	this->_fixed = to_asign.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &to_compare) const
{
	return (this->getRawBits() > to_compare.getRawBits());
}

bool	Fixed::operator<(const Fixed &to_compare) const
{
	return (this->getRawBits() < to_compare.getRawBits());
}

bool	Fixed::operator>=(const Fixed &to_compare) const
{
	return (this->getRawBits() >= to_compare.getRawBits());
}

bool	Fixed::operator<=(const Fixed &to_compare) const
{
	return (this->getRawBits() <= to_compare.getRawBits());
}

bool	Fixed::operator==(const Fixed &to_compare) const
{
	return (this->getRawBits() == to_compare.getRawBits());
}

bool	Fixed::operator!=(const Fixed &to_compare) const
{
	return (this->getRawBits() != to_compare.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &to_add) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + to_add.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &to_sub) const
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - to_sub.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &to_mul) const
{
	Fixed	result(this->toFloat() * to_mul.toFloat());

	return (result);
}

Fixed	Fixed::operator/(const Fixed &to_div) const
{
	Fixed	result(this->toFloat() / to_div.toFloat());

	return (result);
}

Fixed	&Fixed::operator++(void)
{
	++(this->_fixed);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	curr(*this);

	++(*this);
	return(curr);
}

Fixed	&Fixed::operator--(void)
{
	--(this->_fixed);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	curr(*this);

	--(*this);
	return(curr);
}

int	Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

void	Fixed::setRawBits(int const raw)
{
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

Fixed	&Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::min(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed	&Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed	&Fixed::max(const Fixed &lhs, const Fixed &rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

Fixed	Fixed::abs(void)
{
	if (*this < 0)
		return (*this * Fixed(-1));
	return (Fixed(*this));
}

const int	Fixed::_nbr_frac_bits = 8;

std::ostream	&operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}