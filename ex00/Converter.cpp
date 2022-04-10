/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:19:15 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 18:02:51 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <cfloat>
#include <limits> 
#include "Converter.hpp"

const std::string	Converter::_special_val[8] =
{
	"inff",
	"+inff",
	"-inff",
	"nanf",
	"inf",
	"+inf",
	"-inf",
	"nan"
};

// A little explanation on type selection.
// (i / 4) + 2, because i is an int, when divided by 4, it land on 0 until i = 4
// and so on 1 from 4 to 7. Here I add 2 to select either type Float or Double
bool	Converter::_check_special_val(std::string &input)
{
	int i = 0;

	while (i < 8 && input != Converter::_special_val[i])
		i++;
	if (i == 8)
		return false;
	this->_type = (i / 4) + 2;
	this->_nan = true;
	return (true);
}

void	Converter::_valid_input(std::string &input)
{
	size_t	len;
	size_t	i;
	int		dot;
	int		f;
	int		sign;

	if (this->_check_special_val(input))
		return ;
	len = input.length();
	if (len == 1 && (input[0] < '0' || input[0] > '9'))
	{
		this->_type = CHAR;
		return ;
	}
	dot = 0;
	f = 0;
	i = (input[0] == '-' || input[0] == '+');
	sign = i;
	while (i < len && dot < 2 && f < 2)
	{
		if (f)
			throw (Converter::StringInvalid());
		if ((input[i] < 0x20 && input[i] >= 0x7F)
			|| ((input[i] < '0' || input[i] > '9')
			&& input[i] != '.' && input[i] != 'f' && input[i] != 'F'))
			throw (Converter::StringInvalid());
		if (input[i] == '.')
			dot++;
		if (input[i] == 'f' || input[i] == 'F')
		{
			if (!dot)
				dot++;
			f++;
		}
		i++;
	}
	if (f > 1 || (f == 1 && input[len - 1] != 'f')
		|| dot > 1 || (dot + f + sign >= static_cast<int>(len)))
		throw (Converter::StringInvalid());
	this->_type = 1 + (2 * dot) - f;
}

Converter::Converter(void)
: _type(NO_TYPE), _nan(false), _c_conv(0),
	_i_conv(0), _f_conv(0), _d_conv(0)
{
}

Converter::Converter(const Converter &src)
: _type(src._type), _nan(src._nan), _c_conv(src._c_conv),
	_i_conv(src._i_conv), _f_conv(src._f_conv), _d_conv(src._d_conv)
{
}

Converter::~Converter(void)
{
}

Converter	&Converter::operator=(const Converter &rhs)
{
	this->_type = rhs._type;
	this->_nan = rhs._nan;
	this->_c_conv = rhs._c_conv;
	this->_i_conv = rhs._i_conv;
	this->_f_conv = rhs._f_conv;
	this->_d_conv = rhs._d_conv;
	return (*this);
}

void	Converter::convert_str(std::string input)
{
	this->reset();
	this->_valid_input(input);
	switch (this->_type)
	{
	case CHAR:
		this->_c_conv = input[0];
		this->_i_conv = static_cast<int>(this->_c_conv);
		this->_d_conv = static_cast<double>(this->_i_conv);
		this->_f_conv = static_cast<float>(this->_i_conv);
		break;
	case INT:
		this->_i_conv = atoi(input.c_str());
		this->_c_conv = static_cast<char>(this->_i_conv);
		this->_d_conv = static_cast<double>(this->_i_conv);
		this->_f_conv = static_cast<float>(this->_i_conv);
		break;
	case FLOAT:
		this->_f_conv = atof(input.c_str());
		this->_d_conv = static_cast<double>(this->_f_conv);
		this->_i_conv = static_cast<int>(this->_d_conv);
		this->_c_conv = static_cast<char>(this->_i_conv);
	case DOUBLE:
		this->_d_conv = std::strtod(input.c_str(), NULL);
		this->_f_conv = static_cast<float>(this->_d_conv);
		this->_i_conv = static_cast<int>(this->_d_conv);
		this->_c_conv = static_cast<char>(this->_i_conv);
		break;
	default:
		throw (Converter::StringInvalid());
		break;
	}
}

char	Converter::get_c(void)
{
	return(this->_c_conv);
}

int	Converter::get_i(void)
{
	return(this->_i_conv);
}

float	Converter::get_f(void)
{
	return(this->_f_conv);
}

double	Converter::get_d(void)
{
	return(this->_d_conv);
}

void	Converter::print_all(void)
{
	std::cout << "char: ";
	if (this->_nan || this->_d_conv < std::numeric_limits<int>::min()
		|| this->_d_conv > std::numeric_limits<int>::max())
		std::cout << "Impossible" << std::endl;
	else if (this->_c_conv < 0x20 || this->_c_conv >= 0x7F)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << this->_c_conv << std::endl;
	
	std::cout << "int: ";
	if (this->_nan || this->_d_conv < std::numeric_limits<int>::min()
		|| this->_d_conv > std::numeric_limits<int>::max())
		std::cout << "Impossible" << std::endl;
	else
		std::cout << this->_i_conv << std::endl;
	
	std::cout << std::setprecision(1) << std::fixed;
	std::cout << "float: ";
	if ((this->_d_conv < -std::numeric_limits<float>::max() || this->_d_conv > std::numeric_limits<float>::max())
		&& !(this->_d_conv > -std::numeric_limits<float>::min() || this->_d_conv < std::numeric_limits<float>::min()))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << this->_f_conv << 'f' << std::endl;

	std::cout << "double: ";
	if ((this->_d_conv < -std::numeric_limits<double>::max() || this->_d_conv > std::numeric_limits<double>::max())
		&& !(this->_d_conv > -std::numeric_limits<double>::min() || this->_d_conv < std::numeric_limits<double>::min()))
		std::cout << "Impossible" << std::endl;
	else
		std::cout << this->_d_conv << std::endl;
}

void	Converter::reset(void)
{
	this->_type = NO_TYPE;
	this->_nan = false;
	this->_c_conv = 0;
	this->_i_conv = 0;
	this->_f_conv = 0;
	this->_d_conv = 0;
}