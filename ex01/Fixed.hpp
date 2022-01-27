/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:17:44 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/10 11:31:11 by jberredj         ###   ########.fr       */
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
	static bool			_verbose_print;
public:
						Fixed(void);
						Fixed(int init_val);
						Fixed(float init_val);
						Fixed(const Fixed &obj);
						~Fixed(void);

	Fixed				&operator=(const Fixed &to_asign);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	int 				toInt(void) const;
	float 				toFloat(void) const;

	static void			set_verbose(bool new_val);
};

std::ostream		&operator<<(std::ostream &out, const Fixed &fixed);

#endif