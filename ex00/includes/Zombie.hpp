/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 21:05:39 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/25 21:24:19 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

# define ZOMBIE_MSG "BraiiiiiiinnnzzzZ...\n"
# define ZOMBIE_DEAD_MSG "Dead\n"

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		Zombie(const Zombie& other);
		Zombie& operator=(const Zombie& other);
		~Zombie();
		void announce();
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
};

#endif