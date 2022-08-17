/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:02:00 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/17 17:34:58 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ClapTrap CLAP("CLAP");
	ScavTrap TRAITOR;
	ScavTrap BANDIT("Bandit");
	BANDIT.attack("weakling");
	BANDIT.takeDamage(10);
	std::cout << BANDIT.get_hit_p() << std::endl;
	BANDIT.beRepaired(5);
	std::cout << BANDIT.get_hit_p() << std::endl;
	std::cout << BANDIT.get_energy_p() << std::endl;
	TRAITOR.guardGate();

	return (0);
}

/*
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?
*/
//TODO: up
	