/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:50:02 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/06 17:57:15 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <time.h>
#include <iostream>

int	main(void)
{
	Base	base = Base();
	srand(time(NULL));

	Base *p;
	for (size_t i = 0; i < 20; i++)
	{
		p = base.generate();
		base.identify(p);
		base.identify(*p);
		delete p;
		std::cout << std::endl;
	}
	return (0);
}
