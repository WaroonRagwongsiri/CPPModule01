/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:23:44 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 21:33:50 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*horde;
	int		i;

	horde = new Zombie[N];
	if (!horde)
		return (NULL);
	i = 0;
	while (i < N)
	{
		horde[i].set_name(name);
		++i;
	}
	return (horde);
}
