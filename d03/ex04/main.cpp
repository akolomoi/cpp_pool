/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 16:09:42 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 16:09:44 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./SuperTrap.hpp"

int		main()
{
	SuperTrap superTrap("CLAP-9000");


	{
		NinjaTrap	n("1D-TP");
		superTrap.ninjaShoebox(n);
	}
	NL;
	superTrap.rangedAttack("Pinky and Digit");
	superTrap.meleeAttack("Nine Toes");
	NL;
	superTrap.takeDamage(44);
	superTrap.beRapaired(100);
	superTrap.beRapaired(1);
	NL;
	superTrap.vaulthunter_dot_exe("Bone Head");
	NL;
	superTrap.vaulthunter_dot_exe("Roid Rage Psycho");
	NL;
	superTrap.vaulthunter_dot_exe("Mad Mel");
	NL;
	superTrap.vaulthunter_dot_exe("Krom");
	NL;
	superTrap.vaulthunter_dot_exe("Jaynis Kobb");
	NL;
	superTrap.takeDamage(99);
	superTrap.takeDamage(1);
	return (1);
}
