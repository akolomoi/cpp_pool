/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:35:43 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:35:44 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ZombieHorde.hpp"

int 	main()
{
	ZombieHorde	horde = ZombieHorde(7);

	horde.announce();
	return (0);
}
