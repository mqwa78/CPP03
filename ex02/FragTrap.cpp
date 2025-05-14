/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 00:43:05 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 00:52:17 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

//	CONSTRUCTOR

FragTrap::FragTrap() : ClapTrap() {

	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "Default constructor FragTrap " << _name << " called!" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap (name) {

	this->_HitPoints = 100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
	std::cout << "String constructor FragTrap " << _name << " called!" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap " << _name << " called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap & other) : ClapTrap(other) {
	std::cout << "copy FragTrap " << _name << " called!" << std::endl;
}

//	METHODS

void	FragTrap::attack(const std::string & target) {

	if (_HitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't attack, is not alive!" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't attack, not enough energy!" << std::endl;
	}
	else if (target.empty()) {
		std::cout << "FragTrap " << _name << " can't attack, no target!" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _AttackDamage << " damages!" << std::endl;
		_EnergyPoints--;
	}
}

void	FragTrap::highFivesGuys(void) {

	if (_HitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't activate highFivesGuys, is not alive!" << std::endl;
	}
	else if (_EnergyPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't activate highFivesGuys, not enough energy!" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " uses highFivesGuys! " << _name << " waiting for bro..." << std::endl;
		_EnergyPoints--;
	}
}

//	OPERATOR

FragTrap&	FragTrap::operator=(const FragTrap & other) {

	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	if (this != &other) {
		//ClapTrap::operator=(other);
		this->_name = other._name;
		this->_HitPoints = other._HitPoints;
		this->_EnergyPoints = other._EnergyPoints;
		this->_AttackDamage = other._AttackDamage;
	}
	return (*this);
}
