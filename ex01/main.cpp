/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:02:00 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 18:21:38 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	
	ClapTrap CLAP("HERO");
	ScavTrap TRAITOR("TRAITOR");
	ScavTrap TRAITOR2 (TRAITOR);
	TRAITOR.attack(TRAITOR2.get_name());
	CLAP.attack(TRAITOR.get_name());
	TRAITOR.takeDamage(10);
	std::cout << TRAITOR.get_hit_p() << std::endl;
	TRAITOR.beRepaired(5);
	std::cout << TRAITOR.get_hit_p() << std::endl;
	std::cout << TRAITOR.get_energy_p() << "\n";
	TRAITOR.guardGate();

	return (0);
}

/*
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?
*/
