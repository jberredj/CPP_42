/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:44:12 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/21 16:06:46 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	brain("HI THIS IS BRAIN");
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "stringPTR addr: " << stringPTR << std::endl;
	std::cout << "stringREF addr: " << &stringREF << std::endl;
	std::cout << "    brain says: " << brain << std::endl;
	std::cout << "stringPTR says: " << *stringPTR << std::endl;
	std::cout << "stringREF says: " << stringREF << std::endl;
	return (0);
}