/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnivervalScalar.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:25:24 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/06 15:48:51 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "UnivervalScalar.hpp"
#include <ios>
#include <sstream>
#include <iostream>
#include <limits>
#include <cctype>
#include <streambuf>
#include <string>

// #include <iostream>

std::string const	UnivervalScalar::errCantConv = "impossible conversion";
std::string const	UnivervalScalar::errOverflow = "impossible conversion due to overflow";
std::string const	UnivervalScalar::errNotDisplay = "not displayable";

UnivervalScalar::UnivervalScalar() : _type(Scalar::Default), _toDouble(), _toFloat(), _toInt(), _toChar()
{
	// std::cout << "UnivervalScalar default constructor called." << std::endl;
}

bool	UnivervalScalar::_compareNaN(std::string const & str, std::string const NaN[3]) const
{
	for (size_t i = 0; i < 3; i++)
	{
		if (str.compare(NaN[i]) == 0)
			return (true);
	}
	return (false);
}

bool	UnivervalScalar::_parseInputLitteral(std::string const & litteral)
{
	std::string::const_iterator	it;
	std::string const	floatNaN[3] = {"nanf", "-inff", "+inff"};
	std::string const	doubleNaN[3] = {"nan", "-inf", "+inf"};

	if (litteral.length() == 1 && !std::isdigit(*litteral.cbegin()))
		_type = Scalar::Character;
	else
	{
		for (it = litteral.begin(); it != litteral.end() && _type != Scalar::Ndef; it++)
		{
			if (!std::isdigit(*it))
			{
				if (_type == Scalar::Default)
				{
					if (*it == '.')
						_type = Scalar::Double;
					else
						_type = Scalar::Ndef;
				}
				else if (_type == Scalar::Double)
				{
					if (*it == 'f')
						_type = Scalar::Float;
					else
						_type = Scalar::Ndef;
				}
				else
					_type = Scalar::Ndef;
			}
		}
	}
	if (_type == Scalar::Default)
		_type = Scalar::Integer;
	else if (_type == Scalar::Ndef)
	{
		if (_compareNaN(litteral, floatNaN))
		{
			_type = Scalar::NaNf;
			_toFloat.msg = litteral;
			_toDouble.msg = litteral.substr(0, (litteral == "nanf") ? 3 : 4);
		}
		else if (_compareNaN(litteral, doubleNaN))
		{
			_type = Scalar::NaN;
			_toDouble.msg = litteral;
			_toFloat.msg = litteral + "f";
		}
		else
			return (false);
		_toInt.msg = errCantConv;
		_toChar.msg = errCantConv;
	}
	return (true);
}

void	UnivervalScalar::showConversion(void) const
{
	if (_badInput)
	{
		std::cout << "Double: ";
		if (!_toDouble.msg.empty())
			std::cout << _toDouble.msg << std::endl;
		else
			std::cout << _toDouble.value.d << std::endl;

		std::cout << "Float: ";
		if (!_toFloat.msg.empty())
			std::cout << _toFloat.msg << std::endl;
		else
			std::cout << _toFloat.value.f << "f" << std::endl;

		std::cout << "Integer: ";
		if (!_toInt.msg.empty())
			std::cout << _toInt.msg << std::endl;
		else
			std::cout << _toInt.value.i << std::endl;

		std::cout << "Character: ";
		if (!_toChar.msg.empty())
			std::cout << _toChar.msg << std::endl;
		else
			std::cout << _toChar.value.c << std::endl;
	}
}

bool	UnivervalScalar::_isCharDisplayable(char const & c) const
{
	if (c >= 32 && c <= 126)
		return (true);
	else
		return (false);
}

UnivervalScalar::UnivervalScalar(std::string const & litteral) : UnivervalScalar()
{
	if ((_badInput = _parseInputLitteral(litteral)) == false)
		std::cout << "error: bad input, does not refer to any litteral." << std::endl;
	else
	{
		switch (_type)
		{
			case Scalar::Double:
				std::cout << "Detected type : double" << std::endl << std::endl;

				_toDouble.value.d = std::atof(litteral.c_str());
				_toFloat.value.f = static_cast<float>(_toDouble.value.d);

				if (_toDouble.value.d >= static_cast<double>(std::numeric_limits<int>::min())
						&& _toDouble.value.d <= static_cast<double>(std::numeric_limits<int>::max()))
				{
					_toInt.value.i = static_cast<int>(_toDouble.value.d);
					if (_toInt.value.i == std::numeric_limits<int>::min())
						_toInt.msg = errOverflow;
				}
				else
					_toInt.msg = errOverflow;

				if (_toDouble.value.d >= static_cast<double>(std::numeric_limits<char>::min())
						&& _toDouble.value.d <= static_cast<double>(std::numeric_limits<char>::max()))
				{
					if (_isCharDisplayable(static_cast<char>(_toDouble.value.d)))
						_toChar.value.c = static_cast<char>(_toDouble.value.d);
					else
						_toChar.msg = errNotDisplay;
				}
				else
					_toChar.msg = errOverflow;

				break;
			case Scalar::Float:
				std::cout << "Detected type : float" << std::endl << std::endl;

				_toFloat.value.f = static_cast<float>(std::atof(litteral.c_str()));
				_toDouble.value.d = static_cast<double>(_toFloat.value.f);

				if (_toFloat.value.f >= static_cast<float>(std::numeric_limits<int>::min())
						&& _toFloat.value.f <= static_cast<float>(std::numeric_limits<int>::max()))
				{
					_toInt.value.i = static_cast<int>(_toFloat.value.f);
					if (_toInt.value.i == std::numeric_limits<int>::min())
						_toInt.msg = errOverflow;
				}
				else
					_toInt.msg = errOverflow;

				if (_toFloat.value.f >= static_cast<float>(std::numeric_limits<char>::min())
						&& _toFloat.value.f <= static_cast<float>(std::numeric_limits<char>::max()))
				{
					if (_isCharDisplayable(static_cast<char>(_toFloat.value.f)))
						_toChar.value.c = static_cast<char>(_toFloat.value.f);
					else
						_toChar.msg = errNotDisplay;
				}
				else
					_toChar.msg = errOverflow;

				break;
			case Scalar::Integer:
				std::cout << "Detected type : integer" << std::endl << std::endl;

				_toInt.value.i = std::atoi(litteral.c_str());
				_toDouble.value.d = static_cast<double>(_toInt.value.i);
				_toFloat.value.f = static_cast<float>(_toInt.value.i);

				if (_toInt.value.i >= static_cast<int>(std::numeric_limits<char>::min())
						&& _toInt.value.i <= static_cast<int>(std::numeric_limits<char>::max()))
				{
					if (_isCharDisplayable(_toInt.value.i))
						_toChar.value.c = static_cast<char>(_toInt.value.i);
					else
						_toChar.msg = errNotDisplay;
				}
				else
					_toChar.msg = errOverflow;

				break;
			case Scalar::Character:
				std::cout << "Detected type : character" << std::endl << std::endl;

				_toDouble.value.d	= static_cast<double>(litteral[0]);
				_toFloat.value.f	= static_cast<float>(litteral[0]);
				_toInt.value.i		= static_cast<int>(litteral[0]);
				_toChar.value.c		= litteral[0];
				if (!_isCharDisplayable(_toChar.value.c))
					_toChar.msg = "not displayable";
				break;

			default:

				break;
		}
	}


}

UnivervalScalar::UnivervalScalar(UnivervalScalar const & src)
{
	// std::cout << "UnivervalScalar copy constructor called." << std::endl;
}

UnivervalScalar::~UnivervalScalar()
{
	// std::cout << "UnivervalScalar destructor called." << std::endl;
}

UnivervalScalar &	UnivervalScalar::operator=(UnivervalScalar const & rhs)
{
	// std::cout << "UnivervalScalar assignement overload called." << std::endl;
	return (*this);
}
