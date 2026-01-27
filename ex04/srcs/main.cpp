/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:09:54 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 23:45:24 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.hpp"

int main(int argc, char **argv)
{
	std::string		filename;
	std::string		s1;
	std::string		s2;
	std::ifstream	in_file;
	std::ofstream	out_file;
	
	if (argc != 4)
	{
		std::cerr << INVALID_ARGS;
		return (1);
	}
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	in_file.open(filename.c_str());
	out_file.open((filename + ".replace").c_str());
	if (!in_file.is_open() || !out_file.is_open())
	{
		std::cerr << ERR_OPEN_FILES;
		return (2);
	};
	sed(in_file, out_file, s1, s2);
	in_file.close();
	out_file.close();
	return (0);
}
