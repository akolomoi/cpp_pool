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

#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"


int		main()
{
	ScavTrap	*scav = new ScavTrap("B4R-BOT");
	NL;

	scav->rangedAttack("Pinky and Digit");
	scav->meleeAttack("Nine Toes");
	NL;
	scav->takeDamage(44);
	scav->beRapaired(100);
	scav->beRapaired(1);
	NL;
	scav->challengeNewcomer("Bone Head");
	NL;
	scav->challengeNewcomer("Roid Rage Psycho");
	NL;
	scav->challengeNewcomer("Mad Mel");
	NL;
	scav->challengeNewcomer("Krom");
	NL;
	scav->challengeNewcomer("Jaynis Kobb");
	NL;
	scav->takeDamage(4);
	scav->takeDamage(1);
	NL;
	delete (scav);
	NL;


	FragTrap	clap_trap("CL4P_TP");
	FragTrap	clap_trap2(clap_trap);
	NL;

	clap_trap.rangedAttack("Pinky and Digit");
	clap_trap.meleeAttack("Nine Toes");
	NL;
	clap_trap.takeDamage(44);
	clap_trap.beRapaired(100);
	clap_trap.beRapaired(1);
	NL;
	clap_trap.vaulthunter_dot_exe("Bone Head");
	NL;
	clap_trap.vaulthunter_dot_exe("Roid Rage Psycho");
	NL;
	clap_trap.vaulthunter_dot_exe("Mad Mel");
	NL;
	clap_trap.vaulthunter_dot_exe("Krom");
	NL;
	clap_trap.vaulthunter_dot_exe("Jaynis Kobb");
	NL;
	clap_trap.takeDamage(99);
	clap_trap.takeDamage(1);
	NL;
	return (1);
}
