/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:10:56 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 20:10:56 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap::ClapTrap()
{
	this->_hitpoints = 60;
	this->_max_hp = 60;
	this->_max_energy = 120;
	this->_energy = 120;
	this->_melee_ad = 60;
	this->_ranged_ad = 0;
	this->_armor_reduction = 0;
	std::cout << "Default N1NJ-TP unit appears!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	this->_hitpoints = 60;
	this->_max_hp = 60;
	this->_max_energy = 120;
	this->_energy = 120;
	this->_melee_ad = 60;
	this->_ranged_ad = 0;
	this->_armor_reduction = 0;

	std::cout << name << ", a N1NJ-TP unit, appears!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &unit)
{
	*this = unit;
	std::cout << unit.getName() << " (N1NJ-TP) cloned himself!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Well, " << this->getName() << " (N1NJ-TP) is now a bunch of scrap. Not a big loss though." << std::endl;
}

void	NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << target << " laughs watching " << this->getName()
			  << " loading his gun. (N1NJ-TP did " << this->getRangedDmg() << " ranged dmg)" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << "N1NJ-TP "<< this->getName() << " annihilates " << target
			  << " with his sword, causing "<< this->getMeleeDmg() <<" points of damage !" << std::endl;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &unit)
{
	this->_name = unit.getName();
	this->_max_hp = unit.getHp();
	this->_max_hp = unit.getMaxHp();
	this->_energy = unit.getMaxNrg();
	this->_max_energy = unit.getNrg();
	this->_level = unit.getLevel();
	this->_melee_ad = unit.getMeleeDmg();
	this->_ranged_ad = unit.getRangedDmg();
	this->_armor_reduction = unit.getArmor();
	return (*this);
}

void	NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap)
{
	std::cout << "Another fleshbag falls to the Robolution! (N1NJ-TP " << this->getName()
	<< " tricked CL4P-TP " << clapTrap.getName() << ")" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &fragTrap)
{
	std::cout << "How do YOU like target practice? Huh? HUH?! (N1NJ-TP " << this->getName()
			  << " tricked FR4G-TP " << fragTrap.getName() << ")" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap)
{
	std::cout << "WOO! Sucks to be a fleshie! (N1NJ-TP " << this->getName()
			  << " tricked SC4V-TP " << scavTrap.getName() << ")" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &ninjaTrap)
{
	std::cout << "See how our enemies crumble beneath the wheel of the claptrap Robolution! (N1NJ-TP "
	<< this->getName() << " tricked N1NJ-TP " << ninjaTrap.getName() << ")" << std::endl;
}
