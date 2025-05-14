/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:36:36 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 22:34:17 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

//	CONSTRUCTOR

FragTrap::FragTrap() : ClapTrap() {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor FragTrap " << _name << " called!" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap (name) {

	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
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

	if (_hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't attack, is not alive!" << std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't attack, not enough energy!" << std::endl;
	}
	else if (target.empty()) {
		std::cout << "FragTrap " << _name << " can't attack, no target!" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " damages!" << std::endl;
		_energyPoints--;
	}
}

void	FragTrap::highFivesGuys(void) {

	if (_hitPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't activate highFivesGuys, is not alive!" << std::endl;
	}
	else if (_energyPoints <= 0) {
		std::cout << "FragTrap " << _name << " can't activate highFivesGuys, not enough energy!" << std::endl;
	}
	else {
		std::cout << "FragTrap " << _name << " uses highFivesGuys! " << _name << " waiting for bro..." << std::endl;
		_energyPoints--;
	}
}

//	OPERATOR

FragTrap&	FragTrap::operator=(const FragTrap & other) {

	std::cout << "Copy assignment operator FragTrap called" << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
	}
	return (*this);
}
