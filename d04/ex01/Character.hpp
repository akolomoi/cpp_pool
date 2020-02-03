/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:44 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:44 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "./Enemy.hpp"
#include "./AWeapon.hpp"

class Character
{
public:
	Character();
	Character(const Character &c);
	Character(std::string name);
	~Character();

	Character	&operator=(const Character &c);

	void		recoverAP();
	void		equip(AWeapon *weapon);
	void		attack(Enemy *target);

	std::string	getName() const;
	int 		getAP() const;
	AWeapon		*getWeapon() const;

private:
	std::string	_name;
	int 		_ap;
	AWeapon		*_weapon;
};

std::ostream	&operator<<(std::ostream &o, const Character &c);

#endif
