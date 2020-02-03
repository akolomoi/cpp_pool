/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:23:27 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 19:23:28 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap::ClapTrap()
{
	std::cout << "Default scav-tp unit appears!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << name << ", a scav-trap unit, appears!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &unit)
{
	*this = unit;
	std::cout << unit.getName() << " cloned himself! (scav_trap) " << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Well, " << this->getName() << " (scav_trap) is now a bunch of scrap. Not a big loss though." << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &unit)
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

void	ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP "<< this->getName() << " shoots " << target
			  << ", causing "<< this->getRangedDmg() <<" points of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP "<< this->getName() << " slices " << target
			  << ", causing "<< this->getMeleeDmg() <<" points of damage !" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	const std::string arr[5] = {
			"You versus me! Me versus you! Either way!",
			"I will prove to you my robotic superiority!",
			"Dance battle! Or, you know... regular battle.",
			"Man versus machine! Very tiny streamlined machine!",
			"Care to have a friendly duel?"
	};

	std::cout << arr[rand() % 5] << " (" << "SC4V-TP " << this->getName() << " challenged " << target << ")" << std::endl;
}

