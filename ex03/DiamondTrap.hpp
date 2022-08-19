#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{

	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );
		
		void 		attack(const std::string& target);
		void 		whoAmI();
		std::string get_dt_name() const;

	private:

		std::string _name;
};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif /* ***************************************************** DIAMONDTRAP_H */