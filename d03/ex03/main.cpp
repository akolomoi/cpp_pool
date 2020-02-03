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

#include "./NinjaTrap.hpp"

int		main()
{
	NL;
	NinjaTrap	ninja("DAN-TRP");
	{
		ClapTrap	clap("CL_TP");
		ninja.ninjaShoebox(clap);
	}
	NL;
	{
		FragTrap	clap("FR_TP");
		ninja.ninjaShoebox(clap);
	}
	NL;
	{
		ScavTrap	clap("SC_TP");
		ninja.ninjaShoebox(clap);
	}
	NL;
	{
		NinjaTrap	clap("N1_TP");
		ninja.ninjaShoebox(clap);
	}
	NL;

	ninja.takeDamage(10);
	ninja.beRapaired(3);
	ninja.meleeAttack("some badass");
	ninja.rangedAttack("some badass");
	return (1);
}
