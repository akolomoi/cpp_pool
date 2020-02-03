/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:49:08 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:49:09 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Character.hpp"
#include "./SuperMutant.hpp"
#include "./RadScorpion.hpp"
#include "./PlasmaRifle.hpp"
#include "./PowerFist.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	b = NULL;

	Enemy *c = new SuperMutant();

	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;

	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	zaz->attack(c);
	std::cout << *zaz;
	c = NULL;

	return 0;
}
