/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqwa <mqwa@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 04:36:00 by mqwa              #+#    #+#             */
/*   Updated: 2025/05/04 05:54:14 by mqwa             ###   ########.fr       */
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
			int					getHitPoints() const;

	protected:
			std::string		_name;
			int				_hitPoints;
			int				_energyPoints;
			int				_attackDamage;
};

#endif
