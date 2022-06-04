/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:04:00 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 15:32:52 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : AForm(
													"Presidential Pardon Form",
													PresidentialPardonForm::gradeToSign,
													PresidentialPardonForm::gradeToExecute),
													_target("Default target")
{
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm(
													"Presidential Pardon Form",
													PresidentialPardonForm::gradeToSign,
													PresidentialPardonForm::gradeToExecute),
													_target(target)
{
	std::cout << "PresidentialPardonForm parametric constructor called." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
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
	(void) rhs;
	return (*this);
}

bool	PresidentialPardonForm::execute(const Bureaucrat & executor) const
{
	if (!this->_isExecutableBy(executor))
		return (false);
	std::cout << "\"" << this->_target << "\"" << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return (true);
}
