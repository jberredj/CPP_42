/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 15:17:44 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/11 11:04:04 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
private:
	int					_fixed;

	static const int	_nbr_frac_bits;
	static bool			_verbose_print;
public:
						Fixed(void);
						Fixed(const Fixed &obj);
						~Fixed(void);

	Fixed				&operator=(const Fixed &to_asign);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);

	static void			set_verbose(bool new_val);
};

#endif