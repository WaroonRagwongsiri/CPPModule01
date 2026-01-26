/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:03:21 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 21:35:14 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	z1 = Zombie("1");
	Zombie	*horde1;
	int		i;

	z1.announce();
	horde1 = z1.zombieHorde(19, "2");
	i = 0;
	while (i < 19)
	{
		horde1[i].announce();
		++i;
	}
	delete[] horde1;
	return (0);
}
