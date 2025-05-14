/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:36:54 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 05:57:15 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
				FragTrap();
				FragTrap(std::string name);
				FragTrap(const FragTrap & other);
				FragTrap&	operator=(const FragTrap & other);
				~FragTrap();

				void	attack(const std::string & target);
				void	highFivesGuys(void);
	
	protected:
				const static int	_hitPointsConst = 100;
				const static int	_energyPointsConst = 100;
				const static int	_attackDamageConst = 30;
};

#endif
