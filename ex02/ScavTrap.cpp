/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:23:35 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 18:26:33 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap(): ClapTrap()
{
		std::cout << "ScavTrap Default Constructor called" << std::endl;
		_hit_p = 100;
		_energy_p = 50;
		_damage = 20;
}
/*
ILs take only own priv member
I change individually the st values, cause only the variables themselves get copied
*/


ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
		std::cout << "ScavTrap Constructor called" << std::endl;
		this->_hit_p = 100;
		this->_energy_p = 50;
		this->_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap(src)
{

	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}

// /*
// ** --------------------------------- OVERLOAD ---------------------------------
// */

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{

	ClapTrap::operator=(rhs);
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void ScavTrap::attack(const std::string& target)
{
	if (this->_energy_p == 0 || this->_hit_p == 0)
	{
		std::cout << "no hit points or energy points left." << std::endl;
		return;
	}
	this->_energy_p--;
	std::cout << "ScavTrap: " 
	<< this->_name
	<< " attacks "
	<< target
	<< ", causing "
	<< _damage 
	<< " points of damage!" << std::endl;

}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap " << i.get_name() << ": name = " << i.get_name() << "\t";
	o << "ScavTrap " << i.get_name() << ": Hit points = " << i.get_hit_p() << "\t";
	o << "ScavTrap " << i.get_name() << ": Energy points = " << i.get_energy_p() << "\t";
	o << "ScavTrap " << i.get_name() << ": Attack damage = " << i.get_damage() << "\t";

	return o;
}

/* ************************************************************************** */