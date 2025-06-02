/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:41:20 by mqwa              #+#    #+#             */
/*   Updated: 2025/06/02 17:27:34 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int		main(void) {

	ClapTrap clap1("Warrior");
    ClapTrap clap2("Assassin");

	std::cout << std::endl;
	std::cout << clap1.getName() << " stats: ";
	std::cout << "attack: " << clap1.getAttack() << " et HP: " << clap1.getHitPoints() << std::endl;
	std::cout << clap2.getName() << " stats: ";
	std::cout << "attack: " << clap2.getAttack() << " et HP: " << clap2.getHitPoints() << std::endl;
    clap1.attack("Assassin");
    clap2.takeDamage(5);

	std::cout << std::endl;
	std::cout << clap1.getName() << " stats: ";
	std::cout << "attack: " << clap1.getAttack() << " et HP: " << clap1.getHitPoints() << std::endl;
	std::cout << clap2.getName() << " stats: ";
	std::cout << "attack: " << clap2.getAttack() << " et HP: " << clap2.getHitPoints() << std::endl;
    clap2.attack("Warrior");
    clap1.takeDamage(3);

	std::cout << std::endl;
	std::cout << clap1.getName() << " stats: ";
	std::cout << "attack: " << clap1.getAttack() << " et HP: " << clap1.getHitPoints() << std::endl;
	std::cout << clap2.getName() << " stats: ";
	std::cout << "attack: " << clap2.getAttack() << " et HP: " << clap2.getHitPoints() << std::endl;
    clap1.beRepaired(4);
    clap2.beRepaired(2);

	std::cout << std::endl;
	std::cout << clap1.getName() << " stats: ";
	std::cout << "attack: " << clap1.getAttack() << " et HP: " << clap1.getHitPoints() << std::endl;
	std::cout << clap2.getName() << " stats: ";
	std::cout << "attack: " << clap2.getAttack() << " et HP: " << clap2.getHitPoints() << std::endl;
	std::cout << std::endl;
    return (0);
}