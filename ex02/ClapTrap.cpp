/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 04:27:34 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/03 08:18:57 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

//	CONSTRUCTOR

ClapTrap::ClapTrap() : _name("Nameless"), _HitPoints(100), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "Default constructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _HitPoints(100), _EnergyPoints(10), _AttackDamage(0) {
	std::cout << "String constructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap: " << _name << " called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & other) : _name(other._name), _HitPoints(other._HitPoints), _EnergyPoints(other._EnergyPoints), _AttackDamage(other._AttackDamage) {
	std::cout << "copy ClapTrap: " << _name << " called!" << std::endl;
}

//	METHODS

void	ClapTrap::attack(const std::string & target) {

	if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't attack, is not alive!" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't attack, not enough energy!" << std::endl;
	}
	else if (target.empty()) {
		std::cout << "ClapTrap " << _name << " can't attack, no target!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " damages!" << std::endl;
		_EnergyPoints--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	/*if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't be attacked, not enough energy!" << std::endl;
	}*/
	if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't be attacked, he is dead!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " take " << amount << " damages!" << std::endl;
		if (_HitPoints >= (int)amount) {
			_HitPoints -= (int)amount;
		}
		else
			_HitPoints = 0;
	}
}

void	ClapTrap::beRepaired(unsigned int amount) {

	if (_EnergyPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't repair himself, not enough energy!" << std::endl;
	}
	else if (_HitPoints <= 0) {
		std::cout << "ClapTrap " << _name << " can't repair himself, he is dead!" << std::endl;
	}
	else {
		std::cout << "ClapTrap " << _name << " repair " << amount << " HitPoints!" << std::endl;
		_EnergyPoints--;
		if (_HitPoints + amount > MAX_HITPOINTS) {
			_HitPoints = MAX_HITPOINTS;
		}
		else
			_HitPoints += amount;
	}
}

const std::string&	ClapTrap::getName() const {
	return (_name);
}

int	ClapTrap::getAttack() const {
	return (_AttackDamage);
}

int	ClapTrap::getHitPoints() const {
	return (_HitPoints);
}

//	OPERATOR

ClapTrap&	ClapTrap::operator=(const ClapTrap & other) {

	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_name = other._name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}
