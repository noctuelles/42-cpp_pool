/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:12:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 17:23:44 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp" 
#include <iostream>

int	main(void)
{
	Form	godForm = Form("The form of the God of all Bureaucrat", 1, 1);
	Form	averageForm = Form("The average form that everybody can sign", 150, 150);

	std::cout << std::endl;
	std::cout << godForm;
	std::cout << averageForm;
	std::cout << std::endl;
	{
		Bureaucrat	bureaucrat = Bureaucrat("Boss", 2);
		std::cout << bureaucrat;
		bureaucrat.signForm(godForm);
		bureaucrat.incrementGrade();
		bureaucrat.signForm(godForm);
	}
	std::cout << std::endl;
	{
		Bureaucrat	asshole = Bureaucrat("Asshole", 150);
		Bureaucrat	boring = Bureaucrat("Boring guy", 150);
		std::cout << asshole;
		std::cout << boring;
		asshole.signForm(averageForm);
		boring.signForm(averageForm);
	}
	std::cout << std::endl;
	return (0);
}
