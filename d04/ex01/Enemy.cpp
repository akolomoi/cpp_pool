/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:53 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:54 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Enemy.hpp"

Enemy::Enemy() : _hp(100), _type("typeless")
{}

Enemy::Enemy(const Enemy &enemy)
{
	*this = enemy;
}

Enemy::Enemy(int hp, std::string const &type)
: _hp(hp), _type(type)
{}

Enemy::~Enemy()
{}

Enemy	&Enemy::operator=(const Enemy &enemy)
{
	this->_type = enemy.getType();
	this->_hp = enemy.getHP();
	return *this;
}

std::string	Enemy::getType() const
{
	return this->_type;
}

int 		Enemy::getHP() const
{
	return this->_hp;
}

void		Enemy::takeDamage(int dmg)
{
	if (dmg <= 0)
		return ;
	this->_hp -= dmg >= this->_hp ? this->_hp : dmg;
}
