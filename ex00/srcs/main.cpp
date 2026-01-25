/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:03:21 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/25 21:35:35 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie z1 = Zombie("1");
	z1.announce();
	z1.randomChump("2");
	z1.randomChump("3");
	z1.randomChump("4");
	Zombie *z2 = z1.newZombie("number two");
	z2->announce();
	delete z2;
	return (0);
}
