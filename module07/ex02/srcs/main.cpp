/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:32:49 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/07 18:28:40 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>
#include <exception>
#include <iostream>

int	main(void)
{
	Array <int>	myIntArray = Array<int>(10);

	myIntArray[0] = 21;
	myIntArray[1] = 42;
	try
	{
		myIntArray[10] = 23;
	}
	catch (std::exception const & e)
	{
		std::cout << "Exception catched ! " << e.what() << std::endl;
	}
	std::cout << "myIntArray[0] : " << myIntArray[0] << std::endl;
	std::cout << "myIntArray[1] : " << myIntArray[1] << std::endl;
	Array <int>	myCopyArray = myIntArray;
	std::cout << "Dividing by 2 myCopyArray and multiplying by 2 myIntArray" << std::endl;
	myCopyArray[0] /= 2;
	myCopyArray[1] /= 2;
	myIntArray[0] *= 2;
	myIntArray[1] *= 2;
	std::cout << "myCopyArray[0] : " << myCopyArray[0] << std::endl;
	std::cout << "myCopyArray[1] : " << myCopyArray[1] << std::endl;
	std::cout << "myIntArray[0] : " << myIntArray[0] << std::endl;
	std::cout << "myIntArray[1] : " << myIntArray[1] << std::endl;
	std::cout << "Adress of first element of myIntArray : " << &myIntArray[0] << std::endl;
	std::cout << "Adress of first element of myCopyArray : " << &myCopyArray[0] << std::endl;
}
