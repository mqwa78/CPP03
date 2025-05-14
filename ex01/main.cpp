/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:53:48 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/03 07:36:22 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int		main(void) {

	ClapTrap	clapy("Clapy");
	ScavTrap	scavy("Scavy");
	
	std::cout << "Battle: " << clapy.getName() << " VS " << scavy.getName() << " Start!" << std::endl << std::endl;
	while (clapy.getHitPoints() && scavy.getHitPoints()) 
	{
		clapy.attack(scavy.getName());
		scavy.takeDamage(clapy.getAttack());
		scavy.attack(clapy.getName());
		clapy.takeDamage(scavy.getAttack());
		clapy.beRepaired(5);
		scavy.guardGate();
		std::cout << clapy.getName() << " has " << clapy.getHitPoints() << " HitPoints left!" << std::endl;
		std::cout << scavy.getName() << " has " << scavy.getHitPoints() << " HitPoints left!" << std::endl;
	}
	if (!scavy.getHitPoints())
		std::cout << "Congratulation ! " << clapy.getName() << " won !" << std::endl;
	else
		std::cout << "Congratulation ! " << scavy.getName() << " won !" << std::endl;
	return (0);
}
