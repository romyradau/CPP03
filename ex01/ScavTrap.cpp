#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ScavTrap::ScavTrap()
{
		std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
}
//??TODO: hab die werte in claptrap veraendert

// ScavTrap::ScavTrap( const ScavTrap & src )
// {
// 	std::cout << "ScavTrap Copy Constructor called" << std::endl;
// 	*this = src;
// }



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

// ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
// {
// 	if ( this != &rhs )
// 	{
// 		this->_name = rhs.get_name();
// 		this->_hit_p = rhs.get_hit_p();
// 		this->_energy_p = rhs.get_energy_p();
// 		this->_damage = rhs.get_damage();
// 	}
// 	return *this;
// }
// TODO::hat denice auch mit rein

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
// {
// 	o << "Hit points = " << i.get_hit_p();
// 	return o;
// }
//TODO::muss man hier alle Classmembers printen??


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

// void ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (this->_hit_p == 0)
// 	{
// 		std::cout << "no hit points left." << std::endl;
// 		return;
// 	}
// 	this->_hit_p -= amount;
// 	std::cout << "ScavTrap: " 
// 	<< this->_name
// 	<< " loses " 
// 	<< amount
// 	<< " hitpoints!"
// 	<< std::endl;

// }

// void ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (this->_energy_p == 0 || this->_hit_p == 0)
// 	{
// 		std::cout << "no hit points or energy points left." << std::endl;
// 		return;
// 	}
// 	this->_energy_p--;
// 	this->_hit_p += amount;
// 	std::cout << "ScavTrap: " 
// 	<< this->_name
// 	<< " gets "
// 	<< amount
// 	<< "hit points back!" << std::endl;

// }

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

// void 		ScavTrap::set_name(std::string const	name)
// {
// 	this->_name = name;
// }

// void 		ScavTrap::set_hit_p(unsigned int amount)
// {
// 	this->_hit_p = amount;
// }

// void 		ScavTrap::set_energy_p(unsigned int amount)
// {
// 	this->_energy_p = amount;
// }

// void 		ScavTrap::set_damage(unsigned int amount)
// {
// 	this->_damage = amount;
// }

// std::string ScavTrap::get_name() const
// {
// 	return (this->_name);
// }

// int			ScavTrap::get_hit_p() const
// {
// 	return (this->_hit_p);
// }

// int			ScavTrap::get_energy_p() const
// {
// 	return (this->_energy_p);
// }

// int			ScavTrap::get_damage() const
// {
// 	return (this->_damage);
// }


/* ************************************************************************** */