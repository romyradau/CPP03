/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:02:00 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/18 17:14:29 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void )
{
	ScavTrap CLAP("HERO");
	ScavTrap TRAITOR("TRAITOR");
	ScavTrap TRAITOR2 (TRAITOR);
	CLAP.attack(TRAITOR2.get_name());
	TRAITOR.takeDamage(10);
	std::cout << TRAITOR.get_hit_p() << std::endl;
	TRAITOR.beRepaired(5);
	std::cout << TRAITOR.get_hit_p() << std::endl;
	std::cout << TRAITOR.get_energy_p() << "\n";
	std::cout << TRAITOR << TRAITOR2 << CLAP << std::endl;
	TRAITOR.guardGate();

	return (0);
}

/*
Note that proper construction/destruction chaining must be shown in your tests.
When a ScavTrap is created, the program starts by building a ClapTrap. Destruction is
in reverse order. Why?
*/
//TODO: up
	

// int main()
// {
// 	ScavTrap st;
// 	ScavTrap st1("DNC");
// 	ScavTrap st_cpy(st1);
// 	st_cpy.guardGate();
// 	st1.attack(st.get_name());
// 	std::cout << st << st1 << st_cpy;

// 	return (0);
// }