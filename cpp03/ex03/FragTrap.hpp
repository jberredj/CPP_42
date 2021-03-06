/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 20:37:44 by jberredj          #+#    #+#             */
/*   Updated: 2022/03/27 19:53:03 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
public:
				FragTrap(void);
				FragTrap(const FragTrap &src);
				FragTrap(const std::string name);
				~FragTrap(void);

	FragTrap	&operator=(const FragTrap &src);

	void		highFivesGuys(void);
};

#endif