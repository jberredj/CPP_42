/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:35:17 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 11:11:01 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	const std::string	_name;

	void				_print_name(void) const;
public:
						Zombie(std::string name);
						~Zombie(void);
	void				announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif