/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:52:08 by mqwa              #+#    #+#             */
/*   Updated: 2025/06/02 17:41:42 by mqwa             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

# define MAX_HITPOINTS 100

class ClapTrap
{
	public:
			ClapTrap();
			ClapTrap(const std::string name);
			ClapTrap(const ClapTrap & other);
			ClapTrap&	operator=(const ClapTrap & other);
			~ClapTrap();

			void				attack(const std::string & target);
			void				takeDamage(unsigned int amount);
			void				beRepaired(unsigned int amount);
			const std::string&	getName() const;
			int					getAttack() const;
			int					getEnergy() const;
			int					getHitPoints() const;

	protected:
			std::string		_name;
			int				_HitPoints;
			int				_EnergyPoints;
			int				_AttackDamage;
};

#endif
