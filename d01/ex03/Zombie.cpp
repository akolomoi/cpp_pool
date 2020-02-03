/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:31:34 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 15:31:35 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Zombie.hpp"

Zombie::Zombie() : _name("nameless"), _type("typeless")
{}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name
	<< " (" << this->_type << ") disappeared." << std::endl;
}

void		Zombie::set_type(std::string type)
{
	this->_type = type;
}

void		Zombie::set_name(std::string name)
{
	this->_name = name;
}

void		Zombie::announce() const
{
	std::cout << '<' << this->_name << " (" << this->_type
	<< ")> Brrraiiiiinnnssss..." << std::endl;
}

std::string	Zombie::name() const
{
	return (this->_name);
}

std::string	Zombie::type() const
{
	return (this->_type);
}
