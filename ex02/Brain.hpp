/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddiakova <ddiakova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 22:25:41 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/27 15:27:25 by ddiakova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>

class Brain
{
private:
	std::string			_ideas[100];
public:
						Brain(void);
						Brain(const Brain &src);
						~Brain(void);

	Brain				&operator=(const Brain &src);
	const std::string	get_idea(int index) const;
};

#endif