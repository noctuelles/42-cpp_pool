/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:04:00 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 01:07:18 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "BureaucratSymbols.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : Form(
														"Presidential Pardon Form",
														PresidentialPardonForm::gradeToSign,
														PresidentialPardonForm::gradeToExecute)
{
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	std::cout << "PresidentialPardonForm assignement overload called." << std::endl;
}

void	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!this->checkExecutionRequierement(executor))
		return (throw(Form::GradeTooLowException()));
	std::cout << "Bureaucrat \"" << executor.getName() << "\"" << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
