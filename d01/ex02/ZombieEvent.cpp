/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:31:53 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 15:31:55 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieEvent.hpp"

ZombieEvent::ZombieEvent() : z_type("default")
{}

ZombieEvent::~ZombieEvent()
{}

Zombie		*ZombieEvent::newZombie(std::string name)
{
	Zombie	*zombie = new Zombie(name, this->z_type);
	return (zombie);
}

void		ZombieEvent::setZombieType(std::string type)
{
	this->z_type = type;
}

void		ZombieEvent::randomChump()
{
	const std::string names[10] = {
			"Blaster",
			"Pin Cushion",
			"Muncher",
			"Retcher",
			"Scraper",
			"Bleeder",
			"Husk",
			"Fleshy",
			"Blazer",
			"Squealer"
	};
	Zombie	zombie = Zombie(names[std::rand() % 10], this->z_type);
	zombie.announce();
}
