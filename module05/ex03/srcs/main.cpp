/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:12:39 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 16:57:07 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp" 
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int	main(void)
{
	{
		Bureaucrat				*john =  new Bureaucrat("John", 135);
		Bureaucrat				*boss =  new Bureaucrat("Boss", 1);
		Intern					gustave = Intern();

		std::cout << std::endl;
		std::cout << *john;
		std::cout << *boss;
		std::cout << std::endl;

		AForm	*treeForm = gustave.makeForm("shrubbery creation", "My garden");
		AForm	*robotomyForm = gustave.makeForm("robotomy request", "My boss");
		AForm	*pardonForm = gustave.makeForm("presidential pardon", "John");
		AForm	*unknownForm = gustave.makeForm("wertboweriht", "qbwerqwerbbqwr");

		std::cout << std::endl;

		std::cout << *treeForm << std::endl;
		std::cout << *robotomyForm << std::endl;
		std::cout << *pardonForm << std::endl;

		std::cout << std::endl;

		john->signForm(*treeForm);
		john->signForm(*treeForm);
		john->executeForm(*treeForm);
		john->signForm(*robotomyForm);
		john->executeForm(*robotomyForm);

		std::cout << std::endl;
		while (john->getGrade() != RobotomyRequestForm::gradeToExecute)
			john->incrementGrade();
		std::cout << std::endl;

		std::cout << *john;
		std::cout << std::endl;
		john->signForm(*robotomyForm);
		john->executeForm(*robotomyForm);
		std::cout << std::endl;
		boss->signForm(*pardonForm);
		boss->executeForm(*pardonForm);
		std::cout << std::endl;
		boss->executeForm(*robotomyForm);
		std::cout << std::endl;

		delete john;
		delete boss;
		delete treeForm;
		delete robotomyForm;
		delete pardonForm;
		delete unknownForm;
	}
	return (0);
}
