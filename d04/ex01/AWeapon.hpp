/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:25 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:26 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_WEAPON_H
# define A_WEAPON_H

# include <string>
# include <iostream>

class	AWeapon
{
public:
	AWeapon();
	AWeapon(const AWeapon &weapon);
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();

	AWeapon		&operator=(const AWeapon &weapon);

	std::string		getName() const;
	int				getAPCost() const;
	int				getDamage() const;

	virtual void	attack() const = 0;

private:

	std::string	_name;
	int			_cost, _dmg;
};

#endif
