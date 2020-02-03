/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:47:18 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 19:47:19 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ClapTrap.hpp"

ClapTrap::ClapTrap()
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
	std::cout << "Default clap-tp unit appears!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
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
	std::cout << name << ", a clap-trap unit, appears!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &unit)
{
	*this = unit;
	std::cout << unit.getName() << " cloned himself! (clap_trap) " << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Well, " << this->getName() << " (clap_trap) is now a bunch of scrap. Not a big loss though." << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &unit)
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

std::string	ClapTrap::getName() const
{
	return	this->_name;
}

int 	ClapTrap::getHp() const
{
	return this->_hitpoints;
}

int 	ClapTrap::getMaxHp() const
{
	return this->_max_hp;
}

int 	ClapTrap::getNrg() const
{
	return this->_energy;
}

int 	ClapTrap::getMaxNrg() const
{
	return this->_max_energy;
}

int 	ClapTrap::getLevel() const
{
	return this->_level;
}

int 	ClapTrap::getMeleeDmg() const
{
	return this->_melee_ad;
}

int 	ClapTrap::getRangedDmg() const
{
	return this->_ranged_ad;
}

int 	ClapTrap::getArmor() const
{
	return this->_armor_reduction;
}

void	ClapTrap::takeDamage(unsigned int amount)
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
		std::cout << "CL4P-TP " << this->_name << " is kinda dead." << std::endl;
		return ;
	}
	tmp = amount;
	tmp = tmp > this->_armor_reduction ? tmp - this->_armor_reduction : 0;
	this->_hitpoints -= tmp;
	if (tmp == 0)
	{
		this->_hitpoints = 0;
		std::cout << "CL4P-TP " << this->getName() << " was hit, but didn't feel a thing." << std::endl;
	}
	else
		std::cout << arr[rand() % 7] << " (" << "CL4P-TP "  << this->getName()
				  << " took " << tmp << " dmg)" << std::endl;
}

void	ClapTrap::beRapaired(unsigned int amount)
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
		std::cout << "(" << "CL4P-TP " << this->getName() << " is already at full hp)" << std::endl;
		return ;
	}
	if ((this->_hitpoints += amount) > this->getMaxHp())
		this->_hitpoints = this->getMaxHp();
	std::cout << arr[rand() % 5] << " (" << "CL4P-TP " << this->getName()
			  << " healed " << amount << " hp)" << std::endl;
}
