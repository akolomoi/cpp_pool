/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:10:20 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 16:10:21 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

# include <iostream>
# include <string>
#include "./ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap(const FragTrap &unit);
	FragTrap(std::string name);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;

	void	vaulthunter_dot_exe(std::string const &target);

protected:
	static const int rng;
	static const int mhp;
	static const int hp;
	static const int arm;
	FragTrap();
};

#endif
/*
• Hit points (Fragtrap)
• Max hit points (Fragtrap)
• Energy points (Ninjatrap)
• Max energy points (Ninjatrap)
• Level (1)
• Name (Parameter of constructor)
• Melee attack damage (Ninjatrap)
• Ranged attack damage (Fragtrap)
• Armor damage reduction (Fragtrap)
• rangedAttack (Fragtrap)
• meleeAttack (Ninjatrap)
It will have the special attacks of both.
 */