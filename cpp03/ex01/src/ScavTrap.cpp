#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap()
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_name = "default";
	this->_hitpoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hitpoints = rhs._hitpoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitpoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is already dead !" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " can't attack, not energy anymore !" << std::endl;
	else
	{
		this->_energyPoints = this->_energyPoints - 1;
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has enterred in Gate keeper mode" << std::endl;
}

int		ScavTrap::get_damage(void)
{
	return (this->_attackDamage);
}

int		ScavTrap::get_energy(void)
{
	return (this->_energyPoints);
}

int		ScavTrap::get_hitpoints(void)
{
	return (this->_hitpoints);
}
