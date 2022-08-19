/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:04:27 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 16:03:25 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int	main( void )
{
	ClapTrap ct;
	std::cout << std::endl;
	ScavTrap st;
	std::cout << std::endl;
	FragTrap ft;
	std::cout << std::endl;
	DiamondTrap dt;
	DiamondTrap dt2("test");
	std::cout << std::endl;
	std::cout << ct << "\n" << st << "\n" << ft << "\n" << dt <<  "\n" << dt2 << std::endl;
	std::cout << std::endl;
	dt2.whoAmI();
	
	return (0);
}