/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:32:03 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 18:32:03 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

FragTrap::FragTrap(): ClapTrap()
{
		std::cout << "FragTrap Default Constructor called" << std::endl;
		this->_hit_p = 100;
		this->_energy_p = 100;
		this->_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
		std::cout << "FragTrap Constructor called" << std::endl;
		this->_hit_p = 100;
		this->_energy_p = 100;
		this->_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;

}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

FragTrap::~FragTrap()
{
		std::cout << "FragTrap Deconstructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests high fives." << std::endl;

}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, FragTrap const & i )
{
	o << "FragTrap " << i.get_name() << ": name = " << i.get_name() << "\t";
	o << "FragTrap " << i.get_name() << ": Hit points = " << i.get_hit_p() << "\t";
	o << "FragTrap " << i.get_name() << ": Energy points = " << i.get_energy_p() << "\t";
	o << "FragTrap " << i.get_name() << ": Attack damage = " << i.get_damage() << "\t";

	return o;
}

/* ************************************************************************** */