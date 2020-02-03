/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:32:08 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 15:32:09 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./ZombieEvent.hpp"

int 	main()
{
	ZombieEvent	horde;
	int 		i;

	Zombie *a = horde.newZombie("Carrier");
	horde.setZombieType("large");
	Zombie *b = horde.newZombie("Waster");
	horde.setZombieType("mini");

	std::cout << std::endl;
	i = -1;
	while (++i < 5)
	{
		horde.randomChump();
		std::cout << std::endl;
	}

	a->announce();
	b->announce();
	delete (a);
	delete (b);
	return (0);
}
