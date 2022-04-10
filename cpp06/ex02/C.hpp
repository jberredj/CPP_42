/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:07:55 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:11:54 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP
# include "Base.hpp"

class C : public Base
{
public:
	C(void);
	C(const C &src);
	~C(void);

	C	&operator=(const C &rhs);
};

#endif