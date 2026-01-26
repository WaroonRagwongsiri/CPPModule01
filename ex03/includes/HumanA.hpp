/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:02:25 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:45:02 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include "mandatory.hpp"
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		HumanA(const HumanA& other);
		HumanA& operator=(const HumanA& other);
		~HumanA();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif