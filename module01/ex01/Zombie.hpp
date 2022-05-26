/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:45:55 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 14:26:40 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <string>

class Zombie
{

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
	void	setZombieName(std::string const name);

private:

	std::string	_name;

};

#endif
