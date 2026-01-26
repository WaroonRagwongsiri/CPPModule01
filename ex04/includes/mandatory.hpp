/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 23:10:19 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/01/26 23:44:47 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MANDATORY_H
# define MANDATORY_H

# define INVALID_ARGS "how to use\n./sed <filename> <str to be replaced> <str to replaced>\n"
# define ERR_OPEN_FILES "Error to open files\n"

# include <iostream>
# include <string>
# include <fstream>

void	ft_replace(std::string line, std::string s1, std::string s2);

#endif