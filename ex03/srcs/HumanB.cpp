/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:08:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:43:36 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	this->name = "Default Name";
	this->weapon = NULL;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = NULL;
}

HumanB::HumanB(const HumanB& other)
{
	this->name = other.name;
	this->weapon = other.weapon;
}

HumanB& HumanB::operator=(const HumanB& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
	else
		std::cout << this->name << " attacks with their " << "bare fist" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
