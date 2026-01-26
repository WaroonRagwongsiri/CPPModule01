/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:08:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:45:33 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::HumanA(const HumanA& other)
{
	this->name = other.name;
	this->weapon = other.weapon;
}

HumanA& HumanA::operator=(const HumanA& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->weapon = other.weapon;
	}
	return (*this);
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their " << this->weapon->get_type() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
