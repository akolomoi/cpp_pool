/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:38 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:39 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"

Character::Character() : _name("none"), _ap(40), _weapon(NULL)
{}

Character::Character(std::string name) : _name(name), _ap(40), _weapon(NULL)
{}

Character::Character(const Character &c)
{
	*this = c;
}

Character::~Character()
{}

Character	&Character::operator=(const Character &c)
{
	this->_name = c.getName();
	this->_ap = c.getAP();
	this->_weapon = c.getWeapon();
	return *this;
}

std::string	Character::getName() const
{
	return this->_name;
}

int 		Character::getAP() const
{
	return this->_ap;
}

AWeapon		*Character::getWeapon() const
{
	return this->_weapon;
}

void		Character::recoverAP()
{
	this->_ap += this->_ap > 30 ? 40 - this->_ap : 10;
}

void		Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

void		Character::attack(Enemy *target)
{
	if (target == NULL || this->_weapon == NULL || this->_ap < this->_weapon->getAPCost())
		return ;
	std::cout << this->_name << " attacks " << target->getType()
	<< " with a " << this->_weapon->getName() << std::endl;

	this->_weapon->attack();
	this->_ap -= this->_weapon->getAPCost();
	target->takeDamage(this->_weapon->getDamage());
	if (!target->getHP())
	{
		delete (target);
		target = 0;
	}
}

std::ostream	&operator<<(std::ostream &o, const Character &c)
{
	if (c.getWeapon() == NULL)
		o << c.getName() << "has " << c.getAP() << " AP and "
		<< "is unarmed" << std::endl;
	else
		o << c.getName() << "has " << c.getAP() << " AP and "
		<< "wields a " << c.getWeapon()->getName() << std::endl;
	return o;
}

/*
std::ostream	&operator<<(std::ostream &o, const Character &c)
{
o << "lul\n";
if (c.getWeapon())
	o << "lul\n";;
return o;

o c.getName() << "has " << c.getAP() << " AP and ";
if (c.getWeapon() == NULL)
	o << "is unarmed" << std::endl;
else
	o << "wields a " << c.getWeapon()->getName() << std::endl;
return o;

}*/
