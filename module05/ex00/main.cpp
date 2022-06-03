/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:12:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/03 17:24:24 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 
#include <iostream>

int	main(void)
{
	{
		Bureaucrat	bureaucrat = Bureaucrat("Boss", 2);
		try
		{
			std::cout << bureaucrat;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
			bureaucrat.incrementGrade();
		}
		catch(Bureaucrat::GradeTooHighException & e)
		{
			std::cout << "Whops, what happened ? : " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		Bureaucrat	bureaucrat = Bureaucrat();
		try
		{
			std::cout << bureaucrat;
			bureaucrat.incrementGrade();
			std::cout << bureaucrat;
			bureaucrat.decrementGrade();
			std::cout << bureaucrat;
			bureaucrat.decrementGrade();
		}
		catch(Bureaucrat::GradeTooLowException & e)
		{
			std::cout << "Whops, what happened ? : " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	bureaucrat = Bureaucrat("Basile", 180);
		}
		catch(Bureaucrat::GradeTooLowException & e)
		{
			std::cout << "Whops, what happened ? : " << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try
		{
			Bureaucrat	bureaucrat = Bureaucrat("Basile", -2);
		}
		catch(Bureaucrat::GradeTooHighException & e)
		{
			std::cout << "Whops, what happened ? : " << e.what() << std::endl;
		}
	}
	return (0);
}
