/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 12:02:00 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/17 13:08:09 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void )
{
	ClapTrap FURY("Fury");
	FURY.attack("weakling");
	FURY.takeDamage(10);
	std::cout << FURY.get_hit_p() << std::endl;
	FURY.beRepaired(5);
	std::cout << FURY.get_hit_p() << std::endl;

	return (0);
}
	