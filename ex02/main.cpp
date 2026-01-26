/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:39:14 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 21:53:46 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Address of str";
	std::cout << &str << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Address of str";
	std::cout << stringPTR << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Address of str ref";
	std::cout << &stringREF << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value of str";
	std::cout << str << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value of str";
	std::cout << *stringPTR << std::endl;
	std::cout << std::left << std::setfill(' ') << std::setw(20) << "Value of str ref";
	std::cout << stringREF << std::endl;
	return (0);
}
