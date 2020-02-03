/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:18 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:19 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./AWeapon.hpp"

AWeapon::AWeapon() : _name("()"), _cost(0), _dmg(0)
{}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
: _name(name), _cost(apcost), _dmg(damage)
{}

AWeapon::AWeapon(const AWeapon &weapon)
{
	*this = weapon;
}

AWeapon::~AWeapon()
{}

AWeapon		&AWeapon::operator=(const AWeapon &weapon)
{
	this->_dmg = weapon.getDamage();
	this->_cost = weapon.getAPCost();
	this->_name = weapon.getName();
	return *this;
}

std::string	AWeapon::getName() const
{
	return this->_name;
}

int 		AWeapon::getAPCost() const
{
	return this->_cost;
}

int 		AWeapon::getDamage() const
{
	return this->_dmg;
}
