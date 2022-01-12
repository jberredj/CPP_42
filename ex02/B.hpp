/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:07:55 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:11:13 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP
# include "Base.hpp"

class B : public Base
{
public:
	B(void);
	B(const B &src);
	~B(void);

	B	&operator=(const B &rhs);
};

#endif