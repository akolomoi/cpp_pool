/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:42:11 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:42:14 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Squad.hpp"

Squad::Squad() : _unit(0), _marine(NULL)
{}

Squad::Squad(Squad &obj)
{
	t_marinelist *copy;
	t_marinelist *input;

	this->_unit = obj._unit;
	copy = this->_marine;
	input = obj._marine;

	while (input)
	{
		if (copy != NULL)
			copy = NULL;
		else
			copy = new t_marinelist;
		copy->marine = input->marine;
		copy->next = NULL;
		copy = copy->next;
		input = input->next;
	}
	this->_marine = copy;
	delete input;
}

Squad::~Squad()
{
	t_marinelist	*copy;

	while (this->_marine)
	{
		copy = this->_marine->next;
		delete this->_marine->marine;
		delete this->_marine;
		this->_marine = copy;
	}
}

Squad &Squad::operator=(Squad const &r) 
{
	this->_unit = r._unit;
	
	t_marinelist	*del = NULL;

	while (this->_marine)
	{
		del = this->_marine->next;
		delete (this->_marine->marine);
		delete (this->_marine);
		this->_marine = del;
	}
	if (del)
		delete (del);

	t_marinelist *copy;
	t_marinelist *input;

	copy = this->_marine;
	input = r._marine;

	while (input)
	{
		if (copy != NULL)
			copy = NULL;
		else
			copy = new t_marinelist;
		copy->marine = input->marine;
		copy->next = NULL;
		copy = copy->next;
		input = input->next;
	}
	this->_marine = copy;
	delete (input);

	return *this;
}

int		Squad::getCount() const
{
	return (this->_unit);
}

int		Squad::push(ISpaceMarine *obj)
{
	t_marinelist	*copy;

	if (this->_marine == NULL)
	{
		this->_marine = new t_marinelist;
		this->_marine->marine = obj;
		this->_marine->next = NULL;
		this->_unit = this->_unit + 1;

		return this->_unit;
	}
	copy = this->_marine;
	while (copy->next)
		copy = copy->next;
	copy->next = new t_marinelist;
	copy->next->marine = obj;
	copy->next->next = NULL;
	this->_unit = this->_unit + 1;

	return this->_unit;
}

ISpaceMarine*		Squad::getUnit(int i) const
{
	t_marinelist	*ret;

	ret = this->_marine;
	while (i != 0 && ret != NULL)
	{
		ret = ret->next;
		i--;
		if (ret == NULL)
			ret = this->_marine;
	}
	if (ret == NULL)
		ret = this->_marine;
	return ret->marine;
}
