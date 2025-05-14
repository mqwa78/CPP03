/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 08:19:10 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 03:00:31 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int		main(void) {

	ClapTrap	clapy("Clapy");
	ScavTrap	scavy("Scavy");
	FragTrap	fragy("Fragy");
	ScavTrap	scavyJunior;

	scavyJunior = (ScavTrap("ScavyJunior"));

	std::cout << std::endl;
	std::cout << "Battle Round 1: " << clapy.getName() << " VS " << scavy.getName() << " Start!" << std::endl << std::endl;
	while (clapy.getHitPoints() && scavy.getHitPoints()) 
	{
		clapy.attack(scavy.getName());
		scavy.takeDamage(clapy.getAttack());
		scavy.attack(clapy.getName());
		clapy.takeDamage(scavy.getAttack());
		clapy.beRepaired(5);
		scavy.guardGate();
		std::cout << clapy.getName() << " has " << clapy.getHitPoints() << " HitPoints left!" << std::endl;
		std::cout << scavy.getName() << " has " << scavy.getHitPoints() << " HitPoints left!" << std::endl << std::endl;
	}
	if (!scavy.getHitPoints())
		std::cout << "Congratulation ! " << clapy.getName() << " won !" << std::endl << std::endl;
	else
		std::cout << "Congratulation ! " << scavy.getName() << " won !" << std::endl << std::endl;

	std::cout << "Battle Round 2: " << fragy.getName() << " VS " << scavyJunior.getName() << " Start!" << std::endl << std::endl;
	while (fragy.getHitPoints() && scavyJunior.getHitPoints())
	{
		fragy.attack(scavyJunior.getName());
		scavyJunior.takeDamage(fragy.getAttack());
		scavyJunior.attack(fragy.getName());
		fragy.takeDamage(scavyJunior.getAttack());
		fragy.highFivesGuys();
		scavyJunior.guardGate();
		std::cout << fragy.getName() << " has " << fragy.getHitPoints() << " HitPoints left!" << std::endl;
		std::cout << scavyJunior.getName() << " has " << scavyJunior.getHitPoints() << " HitPoints left!" << std::endl << std::endl;
	}
	if (!scavyJunior.getHitPoints())
		std::cout << "Congratulation ! " << fragy.getName() << " won !" << std::endl << std::endl;
	else
		std::cout << "Congratulation ! " << scavyJunior.getName() << " won !" << std::endl << std::endl;
	return (0);
}
