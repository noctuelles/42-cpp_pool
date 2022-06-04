
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
#include "Bureaucrat.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : AForm(
											"Robotomy Request Form",
											RobotomyRequestForm::gradeToSign,
											RobotomyRequestForm::gradeToExecute),
											_target("Unknown target")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm(
											"Robotomy Request Form",
											RobotomyRequestForm::gradeToSign,
											RobotomyRequestForm::gradeToExecute),
											_target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src),
											_target(src._target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

bool	RobotomyRequestForm::execute(const Bureaucrat & executor) const
{
	static bool	robotomizeBureaucrat = true;

	if (!this->_isExecutableBy(executor))
		return (false);
	std::cout << "* loud drilling noises *" << std::endl;
	std::cout << "\"" << this->_target << "\"";
	if (robotomizeBureaucrat)
	{
		std::cout << " has been sucessfully robotomized !" << std::endl;
		robotomizeBureaucrat = false;
	}
	else
	{
		std::cout << " resisted the robotomization !" << std::endl;
		robotomizeBureaucrat = true;
	}
	return (true);
}
