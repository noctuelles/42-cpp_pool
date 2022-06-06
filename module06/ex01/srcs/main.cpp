/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:38:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/06 17:09:57 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int	main(void)
{
	Data		d = {.value = 124235, .c = 'a', .d = 120.49};
	uintptr_t	ptr	= serialize(&d);
	Data *		ptrd = deserialize(ptr);

	std::cout << "Pointer to the struct d: " << &d << std::endl;
	std::cout << "Pointer to the struct d after serialize the addres of d: " << ptr << std::endl;
	std::cout << "Pointer to the struct d after deserializing ptr: " << ptrd << std::endl;
}
