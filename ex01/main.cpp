/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 15:45:51 by jberredj          #+#    #+#             */
/*   Updated: 2022/04/10 18:12:02 by jberredj         ###   ########.fr       */
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
	Data		data_struct;
	uintptr_t	ptr_serialized;
	Data		*ptr_deserialized;

	data_struct.a = 42;
	data_struct.b = 42.42f;
	data_struct.str = "I'm a struct";
	std::cout << data_struct.a << std::endl;
	std::cout << data_struct.b << std::endl;
	std::cout << data_struct.str << std::endl << std::endl;
	ptr_serialized = serialize(&data_struct);
	ptr_deserialized = deserialize(ptr_serialized);
	std::cout << "Struct addr: " << &data_struct << std::endl;
	std::cout << "Serialize  : 0x" << std::hex << ptr_serialized << std::dec << std::endl;
	std::cout << "Deserialize: " << ptr_deserialized << std::endl << std::endl;
	std::cout << ptr_deserialized->a << std::endl;
	std::cout << ptr_deserialized->b << std::endl;
	std::cout << ptr_deserialized->str << std::endl;
	return (0);
}