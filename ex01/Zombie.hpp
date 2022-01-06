/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 10:35:17 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/06 12:19:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
private:
	std::string	_name;

	void				_print_name(void) const;
public:
						Zombie();
						~Zombie(void);
	void				announce(void);
	void				set_name(std::string name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif