/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:02:53 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:32:07 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include "mandatory.hpp"
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB();
		HumanB(std::string name);
		HumanB(const HumanB& other);
		HumanB& operator=(const HumanB& other);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif