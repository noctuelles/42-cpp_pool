/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 22:43:31 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 01:07:23 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "BureaucratSymbols.hpp"
#include <iostream>
#include <string>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(
											"Shrubbery Creation Form",
											ShrubberyCreationForm::gradeToSign,
											ShrubberyCreationForm::gradeToExecute)
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called." << std::endl;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	std::cout << "ShrubberyCreationForm assignement overload called." << std::endl;
	(void) rhs;
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat & executor) const
{
	std::ofstream	ofs;

	if (!this->checkExecutionRequierement(executor))
		return (throw(Form::GradeTooLowException()));
	ofs.open((executor.getName() + "_shruberry").c_str(), std::ofstream::out);
	if (!ofs.fail())
	{
		ofs << "Look at those beautiful shruberry !" << std::endl;
		ofs << "It's for you " << executor.getName() << " :)" << std::endl << std::endl;
		ofs << this->shruberry_one << std::endl << this->shruberry_two;
	}
	ofs.close();
}
