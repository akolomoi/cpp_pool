/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:56:23 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:56:23 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Human.hpp"

Human::Human()
{}

Human::~Human()
{}

std::string	Human::identify()
{
	return (this->_brain.identify());
}

Brain	&Human::getBrain()
{
	return (this->_brain);
}
