
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:48:16 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 00:48:16 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "BureaucratSymbols.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : Form(
											"Robotomy Request Form",
											RobotomyRequestForm::gradeToSign,
											RobotomyRequestForm::gradeToExecute),
											_robotomyAlea(true)
{
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src)
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called." << std::endl;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm assignement overload called." << std::endl;
}

void	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	static bool	robotomyAlea = true;

	if (!this->checkExecutionRequierement(executor))
		return (throw(Form::GradeTooLowException()));
	std::cout << "* loud drilling noises *" << std::endl;
	std::cout << "Bureaucrat \"" << executor.getName() << "\"";
	if (robotomyAlea)
	{
		std::cout << " has been sucessfully robotomized !" << std::endl;
		robotomyAlea = false;
	}
	else
	{
		std::cout << " resisted the robotomization !" << std::endl;
		robotomyAlea = true;
	}
}
