/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 21:14:09 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 21:14:10 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SuperTrap.hpp"
#include "./NinjaTrap.hpp"
#include "./FragTrap.hpp"

SuperTrap::SuperTrap()
		: ClapTrap::ClapTrap("o")
		,FragTrap::FragTrap("o")
		,NinjaTrap::NinjaTrap("o")
{
	this->_hitpoints = FragTrap::hp;
	this->_max_hp = FragTrap::mhp;
	this->_max_energy = NinjaTrap::getMaxNrg();
	this->_energy = NinjaTrap::getNrg();
	this->_melee_ad = NinjaTrap::getMeleeDmg();
	this->_ranged_ad = FragTrap::rng;
	this->_armor_reduction = FragTrap::arm;
	std::cout << "Default SUPER-TP unit appears!" << std::endl;
}

SuperTrap::SuperTrap(std::string name)
		: ClapTrap::ClapTrap(name)
		,FragTrap::FragTrap(name)
		,NinjaTrap::NinjaTrap(name)
{
	this->_hitpoints = FragTrap::hp;
	this->_max_hp = FragTrap::mhp;
	this->_max_energy = NinjaTrap::getMaxNrg();
	this->_energy = NinjaTrap::getNrg();
	this->_melee_ad = NinjaTrap::getMeleeDmg();
	this->_ranged_ad = FragTrap::rng;
	this->_armor_reduction = FragTrap::arm;
	std::cout << name << ", a SUPER-TP unit, appears!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &unit)
{
	*this = unit;
	std::cout << unit.getName() << " (SUPER-TP) cloned himself!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "Well, " << this->getName() << " (SUPER-TP) is now a bunch of scrap. Not a big loss though." << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target) const
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target) const
{
	NinjaTrap::meleeAttack(target);
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &unit)
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
