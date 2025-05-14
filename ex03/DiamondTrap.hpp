/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 05:08:13 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 05:34:50 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	public:
				DiamondTrap();
				DiamondTrap(const std::string name);
				DiamondTrap(const DiamondTrap & other);
				DiamondTrap&	operator=(const DiamondTrap & other);
				~DiamondTrap();

				void	attack(const std::string &target);
				void	whoAmI();
	
	protected:
				std::string		_name;
};

#endif