/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:35:33 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 05:54:11 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

//	CONSTRUCTOR

ClapTrap::ClapTrap() : _name("Nameless"), _hitPoints(100), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(100), _energyPoints(10), _attackDamage(0) {
	std::cout << "String constructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage) {
	std::cout << "copy ClapTrap: " << _name << " called!" << std::endl;
}

//	METHODS

void	ClapTrap::attack(const std::string & target) {

	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't attack, is not alive!" << std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't attack, not enough energy!" << std::endl;
	}
	else if (target.empty()) {
		std::cout << "ClapTrap " << _name << " can't attack, no target!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damages!" << std::endl;
		_energyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	/*if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't be attacked, not enough energy!" << std::endl;
	}*/
	if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't be attacked, he is dead!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " take " << amount << " damages!" << std::endl;
		if (_hitPoints >= (int)amount) {
			_hitPoints -= (int)amount;
		}
		else
			_hitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_energyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't repair himself, not enough energy!" << std::endl;
	}
	else if (_hitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't repair himself, he is dead!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " repair " << amount << " HitPoints!" << std::endl;
		_energyPoints--;
		if (_hitPoints + amount > MAX_HITPOINTS) {
			_hitPoints = MAX_HITPOINTS;
		}
		else
			_hitPoints += amount;
	}
}

const std::string&	ClapTrap::getName() const {
	return (_name);
}

int	ClapTrap::getAttack() const {
	return (_attackDamage);
}

int	ClapTrap::getHitPoints() const {
	return (_hitPoints);
}

//	OPERATOR

ClapTrap&	ClapTrap::operator=(const ClapTrap & other) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return (*this);
}
