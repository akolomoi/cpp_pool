/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:18:47 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:18:49 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) : num(n)
{
	int 	i;
	const	std::string names[10] = {
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

	this->horde = new Zombie[n];
	i = -1;
	while (++i < n)
	{
		this->horde[i].set_name(names[std::rand() % 10]);
		this->horde[i].set_type("normal");
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] (this->horde);
}

void	ZombieHorde::announce()
{
	int	i;

	i = -1;
	while (++i < this->num)
		this->horde[i].announce();
}
