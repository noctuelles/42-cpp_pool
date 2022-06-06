
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UnivervalScalar.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 15:25:24 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/05 15:25:24 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIVERVALSCALAR_CLASS_H
# define UNIVERVALSCALAR_CLASS_H

#include <string>

class	UnivervalScalar
{

	enum class	Scalar {Float, Integer, Character, Double, Ndef, Default, NaNf, NaN};

	public:

		UnivervalScalar(void);
		UnivervalScalar(std::string const & litteral);
		UnivervalScalar(UnivervalScalar const & src);
		~UnivervalScalar(void);

		UnivervalScalar &	operator=(UnivervalScalar const & rhs);

		void	showConversion(void) const;

	private:

		static std::string const	errCantConv, errOverflow, errNotDisplay;

		typedef struct	e_Number
		{
			union
			{
				double	d;
				float	f;
				int		i;
				char	c;
			} value;
			std::string msg;
		}	Number;

		Scalar		_type;
		bool		_badInput;

		Number	_toDouble;
		Number	_toFloat;
		Number	_toInt;
		Number	_toChar;

		bool	_compareNaN(std::string const & str, std::string const NaN[3]) const;
		bool	_parseInputLitteral(std::string const & litteral);
		bool	_isCharDisplayable(char const & c) const;

		template <class RealType>

		void	_castChar(RealType & nbr);

};

#endif // UNIVERVALSCALAR_CLASS_H

