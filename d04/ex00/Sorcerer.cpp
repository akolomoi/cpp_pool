/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:41:40 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:41:41 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("nameless"), _title("no-name")
{
	std::cout << this->getName() << ", the "<< this->getTitle() <<", is born !" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->getName() << ", the "<< this->getTitle() <<", is born !" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &clone)
{
	*this = clone;
	std::cout << this->getName() << ", the "<< this->getTitle() <<", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->getName() << ", " << this->getTitle()
	<< ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &rhs)
{
	this->_title = rhs.getTitle();
	this->_name = rhs.getName();
	return *this;
}

std::string	Sorcerer::getName() const
{
	return this->_name;
}

std::string	Sorcerer::getTitle() const
{
	return this->_title;
}

void		Sorcerer::polymorph(Victim const &victim) const
{
	victim.getPolymorphed();
}

std::ostream	&operator<<(std::ostream &o, const Sorcerer &sorc)
{
	o << "I am " << sorc.getName() << ", " << sorc.getTitle()
	<< ", and I like ponies !" << std::endl;
	return o;
}
