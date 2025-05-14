/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:38:13 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 06:01:01 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

//	CONSTRUCTOR

ScavTrap::ScavTrap() : ClapTrap() {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor ScavTrap " << _name << " called!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap (name) {

	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "String constructor ScavTrap " << _name << " called!" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap " << _name << " called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & other) : ClapTrap(other) {
	std::cout << "copy ScavTrap " << _name << " called!" << std::endl;
}

//	METHODS

void	ScavTrap::attack(const std::string & target) {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't attack, is not alive!" << std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't attack, not enough energy!" << std::endl;
	}
	else if (target.empty()) {
		std::cout << "ScavTrap " << _name << " can't attack, no target!" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damages!" << std::endl;
		_energyPoints--;
	}
}

void	ScavTrap::guardGate() {

	if (_hitPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't activate guardGate, is not alive!" << std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cout << "ScavTrap " << _name << " can't activate guardGate, not enough energy!" << std::endl;
	}
	else {
		std::cout << "ScavTrap " << _name << " uses gardGate! " << _name << " is now in Gate Keeper mod!" << std::endl;
		_energyPoints--;
	}
}

//	OPERATOR

ScavTrap&	ScavTrap::operator=(const ScavTrap & other) {

	std::cout << "Copy assignment operator ScavTrap called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);

	}
	return (*this);
}
