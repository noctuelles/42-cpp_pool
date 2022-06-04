/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:37:51 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/04 14:24:27 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <streambuf>

Bureaucrat::Bureaucrat() : _name("Random bureaucrat"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) :
														_name(name),
														_grade(grade)
{
	std::cout << "Bureaucrat name and grade constructor called." << std::endl;
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const & src) :	_name(src._name),
													_grade(src._grade)
{
	std::cout << "Bureaucrat copy constructor called." << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called." << std::endl;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
	std::cout << "Bureaucrat assignement overload called." << std::endl;
	this->_grade = rhs._grade;
	return (*this);
}

std::string const &	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < (int) Bureaucrat::highestGrade)
		return (throw (Bureaucrat::GradeTooHighException()));
	else
	{
		std::cout << "Bureaucrat \"" << this->_name << "\" got a promotion." << std::endl;
		this->_grade--;
	}
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > (int) Bureaucrat::lowestGrade)
		return (throw (Bureaucrat::GradeTooLowException()));
	else
	{
		std::cout << "Bureaucrat \"" << this->_name << "\" got downgraded." << std::endl;
		this->_grade++;
	}
}

void	Bureaucrat::signForm(Form & form) const
{
	try
	{
		if (form.beSigned(*this) == false)
		{
			std::cout << "Bureaucrat \"" << this->_name << "\" can't sign \""
				<< form.getName() << "\" : form already signed." << std::endl;
			return ;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "Bureaucrat \"" << this->_name << "\" couldn't sign \""
			<< form.getName() << "\" because : " << e.what() << std::endl;
		return ;
	}
	std::cout << "Bureaucrat \"" << this->_name << "\" signed \""
			<< form.getName() << "\" !" << std::endl;
}

const char *	Bureaucrat::GradeTooHighException::what() const throw() 
{
	return ("Bureaucrat grade too high ! A bureaucrat should stay where it belongs and obey.");
}

const char *	Bureaucrat::GradeTooLowException::what() const throw() 
{
	return ("Bureaucrat grade too low ! A bureaucrat should stay where it belongs and obey.");
}

std::ostream &	operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << "Hello i'm a Bureaucrat and my name is \"" << rhs.getName()
		<< "\", my current grade is " << rhs.getGrade() << "." << std::endl;
	return (o);
}
