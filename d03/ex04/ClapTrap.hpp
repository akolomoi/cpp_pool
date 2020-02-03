/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:47:24 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 19:47:24 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

# include <iostream>
# include <string>

# define NL	std::cout << std::endl

class ClapTrap
{
public:
	ClapTrap(const ClapTrap &unit);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();

	ClapTrap(std::string name);

	void	takeDamage(unsigned int amount);
	void	beRapaired(unsigned int amount);

	int			getHp() const;
	int			getMaxHp() const;
	int			getNrg() const;
	int			getMaxNrg() const;
	int			getLevel() const;
	int			getMeleeDmg() const;
	int			getRangedDmg() const;
	int			getArmor() const;
	std::string	getName() const;

protected:
	std::string	_name;

	int	_max_hp;
	int _max_energy;
	int _hitpoints;
	int _energy;
	int _level;
	int _melee_ad;
	int	_ranged_ad;
	int _armor_reduction;
	ClapTrap();
};

#endif
