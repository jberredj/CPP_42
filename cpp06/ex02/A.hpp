/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:07:55 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 16:21:44 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP
# include "Base.hpp"

class A : public Base
{
public:
	A(void);
	A(const A &src);
	~A(void);

	A	&operator=(const A &rhs);
};

#endif