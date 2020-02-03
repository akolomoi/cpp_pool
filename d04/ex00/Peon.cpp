/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:42:16 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:42:17 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Peon.hpp"

Peon::Peon() : Victim("nameless")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &clone)
{
	*this = clone;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon	&Peon::operator=(const Peon &rhs)
{
	this->_name = rhs.getName();
	return *this;
}

void		Peon::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a pink pony !" << std::endl;
}

