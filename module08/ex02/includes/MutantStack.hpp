
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 11:34:44 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/10 11:34:44 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_CLASS_H
# define MUTANTSTACK_CLASS_H

# include <stack>

template < typename T, typename UnderlyingContainer = std::deque<T> >
class	MutantStack : public std::stack<T, UnderlyingContainer>
{

	public:

		typedef typename UnderlyingContainer::iterator			iterator;
		typedef typename UnderlyingContainer::const_iterator	const_iterator;

		MutantStack<T>(void) : std::stack<T, UnderlyingContainer>() {};
		MutantStack<T>(MutantStack const & src) : std::stack<T, UnderlyingContainer>(src) {}
		~MutantStack<T>(void) {};

		MutantStack &	operator=(MutantStack const & rhs)
		{
			if (this != &rhs)
				this = rhs;
			return (*this);
		}

		iterator	begin(void)
		{
			return (c.begin());
		}

		iterator	end(void)
		{
			return (c.end());
		}

	private:

		using std::stack<T, UnderlyingContainer>::c;

};

#endif // MUTANTSTACK_CLASS_H
