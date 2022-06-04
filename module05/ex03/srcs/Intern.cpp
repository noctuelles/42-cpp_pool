
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 15:53:46 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:53:46 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
	std::cout << "Intern default constructor called." << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called." << std::endl;
	(void) src;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
}

Intern &	Intern::operator=(Intern const & rhs)
{
	std::cout << "Intern assignement overload called." << std::endl;
	(void) rhs;
	return (*this);
}

static AForm *	createShrubberyForm(std::string const & target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm *	createRobotomyForm(std::string const & target)
{
	return (new RobotomyRequestForm(target));
}

static AForm *	createPresidentialPardonForm(std::string const & target)
{
	return (new PresidentialPardonForm(target));
}

AForm *	Intern::makeForm(std::string const & form_name, std::string const & target) const
{
	AForm *						form			= NULL;
	static formList const 		formLists[3] =	{
													{"shrubbery creation", createShrubberyForm},
													{"robotomy request", createRobotomyForm},
													{"presidential pardon", createPresidentialPardonForm}
												};

	std::cout << "An Intern";
	for (size_t i = 0 ; i < 3; i++)
	{
		if (formLists[i].formName == form_name)
		{
			form = formLists[i].fnct(target);
			std::cout << " created";
		}
	}
	if (!form)
		std::cout << " failed to create";
	std::cout << " \"" << form_name << "\"." << std::endl;
	return (form);
}
