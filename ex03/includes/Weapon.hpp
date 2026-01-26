/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:02:04 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 22:27:44 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include "mandatory.hpp"

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(/* args */);
		Weapon(std::string type);
		Weapon(const Weapon& other);
		Weapon& operator=(const Weapon& other);
		~Weapon();
		std::string get_type();
		void set_type(std::string type);
};

#endif