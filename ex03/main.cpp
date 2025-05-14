/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:37:32 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/14 20:57:46 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int		main(void) {

	DiamondTrap dt("SuperDiamond");

    std::cout << "\n=== TEST ACTIONS ===\n" << std::endl;
 	dt.attack("un vilain ennemi");
	dt.takeDamage(30);
 	dt.beRepaired(20);
 	dt.whoAmI();
	std::cout << "\n=== FIN DU PROGRAMME ===\n" << std::endl;
	return (0);
}
