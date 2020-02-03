/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:49:38 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:49:39 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &fist)
{
	*this = fist;
}

PowerFist::~PowerFist()
{}

PowerFist	&PowerFist::operator=(const PowerFist &weapon)
{
	AWeapon::operator=(weapon);
	return *this;
}

void		PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *”" << std::endl;
}
