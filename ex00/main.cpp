/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 22:41:20 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/01 23:56:00 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int		main(void) {

	ClapTrap	r2("R2D2");
	ClapTrap	c3("C3PO");
	
	r2.attack("");
	c3.attack("Titeuf");
	r2.takeDamage(50);
	c3.takeDamage(1);
	r2.attack("");
	c3.attack("Titeuf");
	return (0);
}