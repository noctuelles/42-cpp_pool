/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:43:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 16:55:34 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(
											"Shrubbery Creation Form",
											ShrubberyCreationForm::gradeToSign,
											ShrubberyCreationForm::gradeToExecute),
											_target("Unknown target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm(
											"Shrubbery Creation Form",
											ShrubberyCreationForm::gradeToSign,
											ShrubberyCreationForm::gradeToExecute),
											_target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src),
											_target(src._target)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	this->_target = rhs._target;
	return (*this);
}

bool	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	std::ofstream	ofs;

	if (!this->_isExecutableBy(executor))
		return (false);
	ofs.open((this->_target + "_shruberry").c_str(), std::ofstream::out);
	if (!ofs.fail())
	{
		ofs << "Look at those beautiful shruberry !" << std::endl;
		ofs << this->_shruberry_one << std::endl << this->_shruberry_two << std::endl << this->_shruberry_three;
		ofs.close();
	}
	else
		return (false);
	return (true);
}
