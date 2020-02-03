/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:41:57 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:41:57 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Victim.hpp"

Victim::Victim() : _name("nameless")
{
	std::cout << "Some random victim called " << this->getName() <<  " just popped !" << std::endl;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->getName() <<  " just popped !" << std::endl;
}

Victim::Victim(const Victim &clone)
{
	*this = clone;
	std::cout << "Some random victim called " << this->getName() <<  " just popped !" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->getName() << " just died for no apparent reason !" << std::endl;
}

Victim	&Victim::operator=(const Victim &rhs)
{
	this->_name = rhs.getName();
	return *this;
}

std::string	Victim::getName() const
{
	return this->_name;
}

void		Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream	&operator<<(std::ostream &o, const Victim &vict)
{
	o << "I'm " << vict.getName() << " and I like otters !" << std::endl;
	return o;
}
