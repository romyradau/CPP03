#include "ClapTrap.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ClapTrap::ClapTrap()
{
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit_p(100), _energy_p(50), _damage(20)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if ( this != &rhs )
	{
		this->_name = rhs.get_name();
		this->_hit_p = rhs.get_hit_p();
		this->_energy_p = rhs.get_energy_p();
		this->_damage = rhs.get_damage();
	}
	return *this;
}
//muss man die immer händisch hinzufügen??

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << "Hit points = " << i.get_hit_p();
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void ClapTrap::attack(const std::string& target)
{
	if (this->_energy_p == 0 || this->_hit_p == 0)
	{
		std::cout << "no hit points or energy points left." << std::endl;
		return;
	}
	this->_energy_p--;
	std::cout << "Claptrap: " 
	<< this->_name
	<< " attacks "
	<< target
	<< ", causing "
	<< _damage 
	<< " points of damage!" << std::endl;

}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_p == 0)
	{
		std::cout << "no hit points left." << std::endl;
		return;
	}
	this->_hit_p -= amount;
	std::cout << "Claptrap: " 
	<< this->_name
	<< " loses " 
	<< amount
	<< " hitpoints!"
	<< std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_p == 0 || this->_hit_p == 0)
	{
		std::cout << "no hit points or energy points left." << std::endl;
		return;
	}
	this->_energy_p--;
	this->_hit_p += amount;
	std::cout << "Claptrap: " 
	<< this->_name
	<< " gets "
	<< amount
	<< "hit points back!" << std::endl;

}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

void 		ClapTrap::set_name(std::string const	name)
{
	this->_name = name;
}

void 		ClapTrap::set_hit_p(unsigned int amount)
{
	this->_hit_p = amount;
}

void 		ClapTrap::set_energy_p(unsigned int amount)
{
	this->_energy_p = amount;
}

void 		ClapTrap::set_damage(unsigned int amount)
{
	this->_damage = amount;
}

std::string ClapTrap::get_name() const
{
	return (this->_name);
}

int			ClapTrap::get_hit_p() const
{
	return (this->_hit_p);
}

int			ClapTrap::get_energy_p() const
{
	return (this->_energy_p);
}

int			ClapTrap::get_damage() const
{
	return (this->_damage);
}


/* ************************************************************************** */