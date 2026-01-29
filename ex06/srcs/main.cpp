/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroo <waroo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:52:41 by waroo             #+#    #+#             */
/*   Updated: 2026/01/27 14:26:30 by waroo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	harl = Harl();

	if (argc > 2)
	{
		std::cerr << "how to use\n./harl [LEVEL]" << std::endl;
		return (1);
	}
	if (argc == 2)
		harl.filter(argv[1]);
	harl.complain(DEBUG);
	harl.complain(INFO);
	harl.complain(WARNING);
	harl.complain(ERROR);
	return (0);
}
