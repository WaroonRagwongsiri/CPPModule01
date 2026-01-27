/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroo <waroo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:56:22 by waroo             #+#    #+#             */
/*   Updated: 2026/01/27 14:16:19 by waroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::Harl(const Harl &other)
{
	(void) other;
}

Harl &Harl::operator=(const Harl &other)
{
	(void) other;
	return (*this);
}

Harl::~Harl()
{
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {
		DEBUG,
		INFO,
		WARNING,
		ERROR
	};

	void (Harl::*func[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*func[i])();
	}
}

void Harl::debug()
{
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info()
{
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning()
{
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error()
{
	std::cout << ERROR_MSG << std::endl;
}
