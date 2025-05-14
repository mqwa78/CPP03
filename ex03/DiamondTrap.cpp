/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 05:34:55 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 08:07:37 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Nameless_clap_name"), ScavTrap(), FragTrap(), _name("Nameless") {

	this->_hitPoints = FragTrap::_hitPointsConst;
	this->_energyPoints = ScavTrap::_energyPointsConst;
	this->_attackDamage = FragTrap::_attackDamageConst;
	std::cout << "Default constructor DiamondTrap " << _name << " called!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name) {

	this->_hitPoints = FragTrap::_hitPointsConst;
	this->_energyPoints = ScavTrap::_energyPointsConst;
	this->_attackDamage = FragTrap::_attackDamageConst;
	std::cout << "String constructor DiamondTrap " << _name << " called!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other), _name(other._name) {

	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
	std::cout << "Copy constructor DiamondTrap " << _name << " called!" << std::endl;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "Destructor DiamondTrap " << _name << " called!" << std::endl;
}

//	METHODS

void	DiamondTrap::attack(std::string const &target) {

	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {

	if (_energyPoints <= 0) {
		std::cout << "DiamondTrap " << _name << " can't do action, it has no more energy! 😴" << std::endl;
	} else if (_hitPoints <= 0) {
		std::cout << "DiamondTrap " << _name << " can't do action, it's dead! 💀" << std::endl;
	}
	else {
		std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
		_energyPoints--;
	}
}

//	OPERATOR

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &other) {

	std::cout << "Copy assignment operator DiamondTrap called!" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		ScavTrap::operator=(other);
		FragTrap::operator=(other);
		this->_name = other._name;   
	}
	return (*this);
}
