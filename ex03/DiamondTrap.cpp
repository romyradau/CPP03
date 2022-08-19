/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschleic <rschleic@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:31:14 by rschleic          #+#    #+#             */
/*   Updated: 2022/08/19 18:34:50 by rschleic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	ClapTrap::_name = this->_name + "_clap_name";

}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{

	std::cout << "DiamondTrap Constructor called" << std::endl;
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	ScavTrap::_energy_p = 50;
	this->_energy_p = ScavTrap::_energy_p;
}
/*
first ct then st then ft hand over their values
they all share the same variable, its one big diamond struct
in teh end tehre's only one variable, not 4
*/

DiamondTrap::DiamondTrap( const DiamondTrap & src ): ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	std::cout << "DiamondTrap Copy Constructor called" << std::endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

DiamondTrap::~DiamondTrap()
{

	std::cout << "DiamondTrap Deconstructor called" << std::endl;

}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
//other solution?

void	DiamondTrap::whoAmI()
{
	std::cout << "my name is: " << this->_name << "\n" << "Clap Trap's name is: " << ClapTrap::_name << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string DiamondTrap::get_dt_name() const
{
	return this->_name;
}


std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i )
{
	o << "DiamondTrap " << i.get_dt_name() << ": name = " << i.get_dt_name() << "\t";
	o << "DiamondTrap " << i.get_dt_name() << ": Hit points = " << i.get_hit_p() << "\t";
	o << "DiamondTrap " << i.get_dt_name() << ": Energy points = " << i.get_energy_p() << "\t";
	o << "DiamondTrap " << i.get_dt_name() << ": Attack damage = " << i.get_damage() << "\t";

	return o;
}
/* ************************************************************************** */