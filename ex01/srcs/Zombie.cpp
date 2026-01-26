/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:06:01 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 21:32:55 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	this->name = "Default Name";
}

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::Zombie(const Zombie& other)
{
	this->name = other.name;
}

Zombie& Zombie::operator=(const Zombie& other)
{
	if (this != &other)
	{
		this->name = other.name;
	}
	return (*this);
}

Zombie::~Zombie()
{
	std::cout << this->name << ": " << ZOMBIE_DEAD_MSG;
}

void Zombie::announce()
{
	std::cout << this->name << ": " << ZOMBIE_MSG;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}
