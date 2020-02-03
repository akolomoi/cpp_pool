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

# define NL	std::cout << std::endl

class FragTrap
{
public:
	FragTrap(const FragTrap &unit);
	FragTrap &operator=(const FragTrap &rhs);
	~FragTrap();

	FragTrap(std::string name);

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;
	void	takeDamage(unsigned int amount);
	void	beRapaired(unsigned int amount);

	void	vaulthunter_dot_exe(std::string const &target);

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
	FragTrap();

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
