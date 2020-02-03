/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:50:07 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:50:08 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy::Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &enemy)
{
	*this = enemy;
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant	&SuperMutant::operator=(const SuperMutant &enemy)
{
	Enemy::operator=(enemy);
	return *this;
}

void		SuperMutant::takeDamage(int dmg)
{
	Enemy::takeDamage(dmg - 3);
}
