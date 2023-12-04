#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't attack, not energy anymore !" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitpoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead !" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	this->_hitpoints -= amount;
	if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " is dead !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, not energy anymore !" << std::endl;
	else if (this->_hitpoints <= 0)
		std::cout << "ClapTrap " << this->_name << " can't be repaired, he's dead !" << std::endl;
	else if (this->_hitpoints == 10)
		std::cout << "ClapTrap " << this->_name << " is already full hp !" << std::endl;
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points of damage!" << std::endl;
		this->_hitpoints += amount;
	}
}

int		ClapTrap::get_damage(void)
{
	return (this->_attackDamage);
}
