/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:52:56 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 12:22:42 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>

class Karen
{
private:
	typedef void (Karen::*_complaint_t)(void);
	static const _complaint_t	_complaint[4];
	static const std::string	_complaint_level[4];

	void						debug(void);
	void						info(void);
	void						warning(void);
	void						error(void);
public:
								Karen(void);
								~Karen(void);
	void						complain(std::string level);
};

#endif