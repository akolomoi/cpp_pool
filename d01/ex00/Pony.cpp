/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:57:41 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/03 17:57:42 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "./Pony.hpp"

Pony::Pony(std::string name) : _age(0), _weight(20), _hitpoints(100)
{
	name[0] = std::toupper(name[0]);
	this->_name = name;
	std::cout << name << " was born!" << std::endl;
}

Pony::~Pony()
{
	std::cout << this->_name;
	if (this->_hitpoints <= 0)
		std::cout << " was beaten to death.";
	else if (this->_weight > 150)
		std::cout << " was too heavy to live.";
	else if (this->_weight < 0)
		std::cout << " died because of starvation.";
	else if (this->_age > 5)
		std::cout << " passed away.";
	else
		std::cout << " is gone.";
	std::cout << std::endl;
}

bool	Pony::IsAlive()
{
	return (!(this->_hitpoints <= 0 || this->_weight > 150
	|| this->_weight < 0 || this->_age > 5));
}

void	Pony::MsgDead()
{
	std::cout << this->_name << " doesn't show signs of life." << std::endl;
}

void	Pony::Hit(int damage)
{
	if (!this->IsAlive())
	{
		MsgDead();
		return;
	}
	std::cout << this->_name;
	if (damage < 10)
		std::cout << " was hit.";
	else if (damage < 25)
		std::cout << " was hit hard.";
	else if (damage < 50)
		std::cout << " took a hard blow.";
	else if (damage < 75)
		std::cout << " was wounded";
	else
		std::cout << " was grievously wounded.";
	std::cout << std::endl;
	this->_hitpoints -= damage;
}

void	Pony::Grow()
{
	if (!this->IsAlive())
	{
		MsgDead();
		return;
	}
	this->_age += 1;
	std::cout << this->_name << " got older. ("
	<< this->_age << ")" << std::endl;
	this->_weight -= 15;
}

void	Pony::Eat(unsigned int kg)
{
	if (!this->IsAlive())
	{
		MsgDead();
		return;
	}
	std::cout << this->_name << " ate " << kg << "kg today." << std::endl;
	this->_weight += kg;
	this->_hitpoints += (int)(kg / 10);
}


