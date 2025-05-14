/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:38:31 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 06:01:02 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	public:
				ScavTrap();
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap & other);
				ScavTrap&	operator=(const ScavTrap & other);
				~ScavTrap();

				void	attack(const std::string & target);
				void	guardGate();
	
	protected:
				const static int	_hitPointsConst = 100;
				const static int	_energyPointsConst = 50;
				const static int	_attackDamageConst = 20;
};

#endif
