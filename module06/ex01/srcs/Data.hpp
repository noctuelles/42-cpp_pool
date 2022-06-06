/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 16:55:27 by plouvel           #+#    #+#             */
/*   Updated: 2022/06/06 17:08:30 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <stdint.h>

typedef struct e_Data
{
	unsigned int	value;
	char			c;
	double			d;
}				Data;

uintptr_t	serialize(Data *ptr);
Data *		deserialize(uintptr_t raw);

#endif
