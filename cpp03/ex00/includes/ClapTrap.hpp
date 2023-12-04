#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		~ClapTrap(void);

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		int		get_damage(void);

	private:
		std::string	_name;
		int			_hitpoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif