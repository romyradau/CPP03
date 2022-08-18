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
//in eine ILis koennne wirklcih nru die eigenen werte
//hier veraendere ich individuell die st werte, name wird aber uebernommen vom ct defalt constructor "default"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
		// this->_name = name;
		//kann weg, weil er das vom ct erbt
		//ct hat dann automatischa cuh den Namen
		std::cout << "ScavTrap Constructor called" << std::endl;
		this->_hit_p = 100;
		this->_energy_p = 50;
		this->_damage = 20;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap(src)
{

	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	// *this = src;
}
//initilizer list gibts nur fuer constructoren



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor called" << std::endl;
}
//TODO: warum muss man bei deconstructor nicht : ClapTrap() schreiben?


// /*
// ** --------------------------------- OVERLOAD ---------------------------------
// */

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{

	ClapTrap::operator=(rhs);

	return *this;
}


std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
{
	o << "ScavTrap" << i.get_name() << ": Hit points = " << i.get_hit_p();
	return o;
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