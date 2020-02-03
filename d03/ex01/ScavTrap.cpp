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

ScavTrap::ScavTrap()
		: _name("default"),
		  _max_hp(100),
		  _max_energy(50),
		  _hitpoints(100),
		  _energy(50),
		  _level(1),
		  _melee_ad(20),
		  _ranged_ad(15),
		  _armor_reduction(3)
{
	std::cout << "Default scav-tp unit appears!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
		: _name(name),
		  _max_hp(100),
		  _max_energy(50),
		  _hitpoints(100),
		  _energy(50),
		  _level(1),
		  _melee_ad(20),
		  _ranged_ad(15),
		  _armor_reduction(3)
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

std::string	ScavTrap::getName() const
{
	return	this->_name;
}

int 	ScavTrap::getHp() const
{
	return this->_hitpoints;
}

int 	ScavTrap::getMaxHp() const
{
	return this->_max_hp;
}

int 	ScavTrap::getNrg() const
{
	return this->_energy;
}

int 	ScavTrap::getMaxNrg() const
{
	return this->_max_energy;
}

int 	ScavTrap::getLevel() const
{
	return this->_level;
}

int 	ScavTrap::getMeleeDmg() const
{
	return this->_melee_ad;
}

int 	ScavTrap::getRangedDmg() const
{
	return this->_ranged_ad;
}

int 	ScavTrap::getArmor() const
{
	return this->_armor_reduction;
}

void	ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << "SC4V-TP "<< this->getName() << " attacks " << target
			  << " at range, causing "<< this->getRangedDmg() <<" points of damage !" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << "SC4V-TP "<< this->getName() << " attacks " << target
			  << " at melee, causing "<< this->getMeleeDmg() <<" points of damage !" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int 	tmp;
	const	std::string arr[7] = {
			"Why do I even feel pain?!",
			"Why did they build me out of galvanized flesh?!",
			"Ow hohoho, that hurts! Yipes!",
			"My robotic flesh! AAHH!",
			"Yikes! Ohhoho!",
			"Woah! Oh! Jeez!",
			"If only my chassis... weren't made of recycled human body parts! Wahahaha!"
	};

	if (this->_hitpoints == 0)
	{
		std::cout << "SC4V-TP " << this->_name << " is kinda dead." << std::endl;
		return ;
	}
	tmp = amount;
	tmp = tmp > this->_armor_reduction ? tmp - this->_armor_reduction : 0;
	this->_hitpoints -= tmp;
	if (tmp == 0)
	{
		this->_hitpoints = 0;
		std::cout << "SC4V-TP " << this->getName() << " was hit, but didn't feel a thing." << std::endl;
	}
	else
		std::cout << arr[rand() % 7] << " (" << "SC4V-TP "  << this->getName()
				  << " took " << tmp << " dmg)" << std::endl;
}

void	ScavTrap::beRapaired(unsigned int amount)
{
	const std::string arr[5] = {
			"Health! Eww, what flavor is red?",
			"Health over here!",
			"Sweet life juice!",
			"I found health!",
			"Healsies!"
	};

	if (this->_hitpoints == this->_max_hp)
	{
		std::cout << "(" << "SC4V-TP " << this->getName() << " is already at full hp)" << std::endl;
		return ;
	}
	if ((this->_hitpoints += amount) > this->getMaxHp())
		this->_hitpoints = this->getMaxHp();
	std::cout << arr[rand() % 5] << " (" << "SC4V-TP " << this->getName()
			  << " healed " << amount << " hp)" << std::endl;
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

