/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:04:00 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 16:55:11 by plouvel          ###   ########.fr       */
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
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : AForm(
													"Presidential Pardon Form",
													PresidentialPardonForm::gradeToSign,
													PresidentialPardonForm::gradeToExecute),
													_target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : AForm(src)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
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
