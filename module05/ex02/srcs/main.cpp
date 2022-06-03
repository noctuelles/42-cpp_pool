/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:12:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 01:07:21 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int	main(void)
{
	Bureaucrat				john = Bureaucrat("John", 140);
	ShrubberyCreationForm	treeForm = ShrubberyCreationForm();

	std::cout << john;
	john.signForm(treeForm);
	john.signForm(treeForm);
	john.executeForm(treeForm);
	return (0);
}
