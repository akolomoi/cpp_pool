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

FragTrap::FragTrap() : ClapTrap::ClapTrap()
{
	this->_ranged_ad = 20;
	this->_melee_ad = 30;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_armor_reduction = 5;
	std::cout << "Default frag-tp unit appears!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	this->_ranged_ad = 20;
	this->_melee_ad = 30;
	this->_energy = 100;
	this->_max_energy = 100;
	this->_armor_reduction = 5;
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

const int FragTrap::rng = 20;
const int FragTrap::mhp = 100;
const int FragTrap::hp = 100;
const int FragTrap::arm = 5;

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
