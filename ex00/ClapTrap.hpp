#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
		ClapTrap(std::string const	name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap &	operator=(ClapTrap const & rhs);

		void 		attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);

		void 		set_name(std::string const	name);
		void 		set_hit_p(unsigned int amount);
		void 		set_energy_p(unsigned int amount);
		void 		set_damage(unsigned int amount);
		std::string get_name() const;
		int			get_hit_p() const;
		int			get_energy_p() const;
		int			get_damage() const;

	private:
		
		std::string		_name;
		unsigned int	_hit_p;
		unsigned int	_energy_p;
		unsigned int	_damage;
};

std::ostream &			operator<<(std::ostream & o, ClapTrap const & i);

#endif /* ******************************************************** CLAPTRAP_H */