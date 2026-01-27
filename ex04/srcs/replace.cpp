/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:15:11 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 23:44:43 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mandatory.hpp"

void	ft_replace(std::string &line, std::string s1, std::string s2)
{
	std::size_t	index;
	int			line_len;
	int			s1_len;
	int			s2_len;
	std::string	first_part;
	std::string	last_part;

	line_len = line.length();
	s1_len = s1.length();
	s2_len = s2.length();
	if (line_len < s1_len || s2_len <= 0 || s1_len <= 0)
		return ;
	index = line.find(s1);
	while (index != std::string::npos)
	{
		first_part = line.substr(0, index);
		last_part = line.substr(index + s1_len, line_len);
		line = first_part + s2 + last_part;
		index = line.find(s1, index + s2_len);
	}
}

void	sed(std::ifstream &in_file, std::ofstream &out_file, std::string s1, std::string s2)
{
	std::string	line;

	while (std::getline(in_file, line))
	{
		ft_replace(line, s1, s2);
		out_file << line << std::endl;
	}
}
