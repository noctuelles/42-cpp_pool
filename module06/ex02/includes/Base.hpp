/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 17:31:20 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/06 17:57:10 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_CLASS_HPP
# define BASE_CLASS_HPP

class	Base
{
	public:

		virtual ~Base(void);

		Base *	generate(void);
		void	identify(Base *p);
		void	identify(Base &p);
};

#endif
