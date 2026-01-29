/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroo <waroo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:54:03 by waroo             #+#    #+#             */
/*   Updated: 2026/01/27 14:22:13 by waroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# define DEBUG "DEBUG"
# define INFO "INFO"
# define WARNING "WARNING"
# define ERROR "ERROR"

# define DEBUG_MSG "Debug msg"
# define INFO_MSG "Info msg"
# define WARNING_MSG "Warning msg"
# define ERROR_MSG "Error msg"

# include <string>
# include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
		int level;
	public:
		Harl(/* args */);
		Harl(const Harl &other);
		Harl &operator=(const Harl &other);
		~Harl();
		void complain(std::string complain);
		void filter(std::string level);
};

#endif