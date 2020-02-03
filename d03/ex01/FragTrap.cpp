/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:09:37 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 16:09:38 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"

FragTrap::FragTrap()
: _name("[DE]F4_uLT"),
  _max_hp(100),
  _max_energy(100),
  _hitpoints(100),
  _energy(100),
  _level(1),
  _melee_ad(30),
  _ranged_ad(20),
  _armor_reduction(5)
{
	std::cout << "Default clap-tp unit appears!" << std::endl;
}

FragTrap::FragTrap(std::string name)
: _name(name),
  _max_hp(100),
  _max_energy(100),
  _hitpoints(100),
  _energy(100),
  _level(1),
  _melee_ad(30),
  _ranged_ad(20),
_armor_reduction(5)
{
	std::cout << name << ", a frag-trap unit, appears!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &unit)
{
	*this = unit;
	std::cout << unit.getName() << " cloned himself!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "Well, " << this->getName() << " is now a bunch of scrap. Not a big loss though." << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &unit)
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

std::string	FragTrap::getName() const
{
	return	this->_name;
}

int 	FragTrap::getHp() const
{
	return this->_hitpoints;
}

int 	FragTrap::getMaxHp() const
{
	return this->_max_hp;
}

int 	FragTrap::getNrg() const
{
	return this->_energy;
}

int 	FragTrap::getMaxNrg() const
{
	return this->_max_energy;
}

int 	FragTrap::getLevel() const
{
	return this->_level;
}

int 	FragTrap::getMeleeDmg() const
{
	return this->_melee_ad;
}

int 	FragTrap::getRangedDmg() const
{
	return this->_ranged_ad;
}

int 	FragTrap::getArmor() const
{
	return this->_armor_reduction;
}

void	FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << "FR4G-TP "<< this->getName() << " attacks " << target
	<< " at range, causing "<< this->getRangedDmg() <<" points of damage !" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << "FR4G-TP "<< this->getName() << " attacks " << target
	<< " at melee, causing "<< this->getMeleeDmg() <<" points of damage !" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
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
		std::cout << this->_name << " is kinda dead." << std::endl;
		return ;
	}
	tmp = amount;
	tmp = tmp > this->_armor_reduction ? tmp - this->_armor_reduction : 0;
	this->_hitpoints -= tmp;
	if (tmp == 0)
	{
		this->_hitpoints = 0;
		std::cout << this->getName() << " was hit, but didn't feel a thing." << std::endl;
	}
	else
		std::cout << arr[rand() % 7] << " (" << this->getName()
		<< " took " << tmp << " dmg)" << std::endl;
}

void	FragTrap::beRapaired(unsigned int amount)
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
		std::cout << "(" << this->getName() << " is already at full hp)" << std::endl;
		return ;
	}
	if ((this->_hitpoints += amount) > this->getMaxHp())
		this->_hitpoints = this->getMaxHp();
	std::cout << arr[rand() % 5] << " (" << this->getName()
	<< " healed " << amount << " hp)" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	const std::string arr[25] = {
			"This time it'll be awesome, I promise!",
			"Hey everybody, check out my package!",
			"Place your bets!",
			"Defragmenting!",
			"Recompiling my combat code!",
			"Running the sequencer!",
			"It's happening... it's happening!",
			"It's about to get magical!",
			"I'm pulling tricks outta my hat!",
			"You can't just program this level of excitement!",
			"What will he do next?",
			"Things are about to get awesome!",
			"Let's get this party started!",
			"Glitchy weirdness is term of endearment, right?",
			"Push this button, flip this dongle, voila! Help me!",
			"square the I, carry the 1... YES!",
			"Resequencing combat protocols!",
   			"Look out everybody, things are about to get awesome!",
			"I have an IDEA!",
			"Round and around and around she goes!",
			"It's like a box of chocolates...",
			"Step right up to the sequence of Trapping!",
			"Hey everybody, check out my package!",
			"Loading combat packages!",
			"F to the R to the 4 to the G to the WHAAT!"
	};

	if (this->getNrg() < 25)
	{
		std::cout << this->_name << " is low on energy, so he can't show his AWESOME TRICKS."
		<< " Lucky you, " << target << "!" << std::endl;
		return ;
	}
	this->_energy -= 25;
	std::cout << arr[rand() % 25] << " (" << this->getName() << " did A TON of dmg to " << target << ")" << std::endl;
}
