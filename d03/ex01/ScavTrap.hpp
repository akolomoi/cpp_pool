/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:23:36 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 19:24:10 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include <string>

class ScavTrap
{
public:
	ScavTrap(const ScavTrap &unit);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();

	ScavTrap(std::string name);

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	takeDamage(unsigned int amount);
	void	beRapaired(unsigned int amount);

	void	challengeNewcomer(std::string const &target);

	int			getHp() const;
	int			getMaxHp() const;
	int			getNrg() const;
	int			getMaxNrg() const;
	int			getLevel() const;
	int			getMeleeDmg() const;
	int			getRangedDmg() const;
	int			getArmor() const;
	std::string	getName() const;

private:
	ScavTrap();

	std::string	_name;

	int	_max_hp;
	int _max_energy;
	int _hitpoints;
	int _energy;
	int _level;
	int _melee_ad;
	int	_ranged_ad;
	int _armor_reduction;
};

#endif
