/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:45:51 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/12 15:52:31 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>
#include "Data.hpp"

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t ptr)
{
	return (reinterpret_cast<Data *>(ptr));
}

int	main(void)
{
	Data		*ptr;
	uintptr_t	ptr_serialized;
	Data		*ptr_deserialized;

	ptr = new Data("I'm a string");
	std::cout << *ptr << std::endl;
	ptr_serialized = serialize(ptr);
	ptr_deserialized = deserialize(ptr_serialized);
	std::cout << *ptr_deserialized << std::endl;
	delete (ptr_deserialized);
	return (0);
}