/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 11:52:56 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/07 12:40:43 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <string>

class Karen
{
private:
	static const std::string	_complaint_level[4];
	enum 						_level_e{
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

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