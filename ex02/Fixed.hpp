/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:17:44 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 12:15:57 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <ostream>

class Fixed
{
private:
	int					_fixed;

	static const int	_nbr_frac_bits;
public:
						Fixed(void);
						Fixed(int init_val);
						Fixed(float init_val);
						Fixed(const Fixed &obj);
						~Fixed(void);

	Fixed				&operator=(const Fixed &to_asign);
	bool				operator>(const Fixed &to_compare) const;
	bool				operator<(const Fixed &to_compare) const;
	bool				operator>=(const Fixed &to_compare) const;
	bool				operator<=(const Fixed &to_compare) const;
	bool				operator==(const Fixed &to_compare) const;
	bool				operator!=(const Fixed &to_compare) const;
	Fixed				operator+(const Fixed &to_add) const;
	Fixed				operator-(const Fixed &to_sub) const;
	Fixed				operator*(const Fixed &to_mul) const;
	Fixed				operator/(const Fixed &to_div) const;
	Fixed				&operator++(void);
	Fixed				operator++(int);
	Fixed				&operator--(void);
	Fixed				operator--(int);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int 				toInt(void) const;
	float 				toFloat(void) const;
	static Fixed		&min(Fixed &lhs, Fixed &rhs);
	static const Fixed	&min(const Fixed &lhs, const Fixed &rhs);
	static Fixed		&max(Fixed &lhs, Fixed &rhs);
	static const Fixed	&max(const Fixed &lhs, const Fixed &rhs);
};

std::ostream		&operator<<(std::ostream &out, const Fixed &fixed);

#endif