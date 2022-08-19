/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:04:27 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 18:26:01 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


// int	main( void )
// {
// 	FragTrap FRAG("HERO");
// 	FragTrap TRAITOR("TRAITOR");
// 	FragTrap TRAITOR2 (TRAITOR);
// 	FRAG.attack(TRAITOR2.get_name());
// 	TRAITOR.takeDamage(10);
// 	std::cout << TRAITOR.get_hit_p() << std::endl;
// 	TRAITOR.beRepaired(5);
// 	std::cout << TRAITOR.get_hit_p() << std::endl;
// 	std::cout << TRAITOR.get_energy_p() << "\n";
// 	std::cout << TRAITOR << TRAITOR2 << FRAG << std::endl;
// 	FRAG.highFivesGuys();
	

// 	return (0);
// }

int	main( void )
{
	ClapTrap ct;
	std::cout << std::endl;
	ScavTrap st;
	std::cout << std::endl;
	FragTrap ft;
	// std::cout << std::endl;
	// DiamondTrap dt;
	// DiamondTrap dt2("test");
	std::cout << std::endl;
	std::cout << ct << "\n" << st << "\n" << ft << std::endl;
	std::cout << std::endl;
	
	return (0);
}