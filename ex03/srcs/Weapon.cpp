/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:05:43 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:26:56 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
	this->type = "Default Type";
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(const Weapon& other)
{
	this->type = other.type;
}

Weapon& Weapon::operator=(const Weapon& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Weapon::~Weapon()
{	
}

std::string Weapon::get_type()
{
	return this->type;
}

void Weapon::set_type(std::string type)
{
	this->type = type;
}
