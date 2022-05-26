/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 19:28:15 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 19:29:22 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	theHarl = Harl();

	theHarl.complain("DEBUG");
	theHarl.complain("INFO");
	theHarl.complain("WARNING");
	theHarl.complain("ERROR");
	theHarl.complain("GARBAGE");

	return (0);
}
