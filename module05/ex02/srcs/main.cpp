/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:12:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:32:49 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int	main(void)
{
	{
		Bureaucrat				*john =  new Bureaucrat("John", 135);
		Bureaucrat				*boss =  new Bureaucrat("Boss", 1);

		std::cout << std::endl;
		std::cout << *john;
		std::cout << *boss;
		std::cout << std::endl;

		ShrubberyCreationForm	treeForm = ShrubberyCreationForm("My garden");
		RobotomyRequestForm		robotomyForm = RobotomyRequestForm("My boss");
		PresidentialPardonForm	pardonForm = PresidentialPardonForm("John");

		std::cout << std::endl;

		std::cout << treeForm << std::endl;
		std::cout << robotomyForm << std::endl;
		std::cout << pardonForm << std::endl;

		std::cout << std::endl;

		john->signForm(treeForm);
		john->signForm(treeForm);
		john->executeForm(treeForm);
		john->signForm(robotomyForm);
		john->executeForm(robotomyForm);

		std::cout << std::endl;
		while (john->getGrade() != RobotomyRequestForm::gradeToExecute)
			john->incrementGrade();
		std::cout << std::endl;

		std::cout << *john;
		std::cout << std::endl;
		john->signForm(robotomyForm);
		john->executeForm(robotomyForm);
		std::cout << std::endl;
		boss->signForm(pardonForm);
		boss->executeForm(pardonForm);
		std::cout << std::endl;
		boss->executeForm(robotomyForm);
		std::cout << std::endl;

		delete john;
		delete boss;
	}
	return (0);
}
