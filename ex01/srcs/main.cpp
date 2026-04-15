/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:03:21 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/04/15 17:07:35 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define ZOMBIE_NUM 5

int	main(void)
{
	Zombie	z1 = Zombie("1");
	Zombie	*horde1;
	int		i;

	z1.announce();
	horde1 = z1.zombieHorde(ZOMBIE_NUM, "2");
	i = 0;
	while (i < ZOMBIE_NUM)
	{
		horde1[i].announce();
		++i;
	}
	delete[] horde1;
	return (0);
}
