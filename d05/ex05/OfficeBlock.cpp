/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:47:53 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 18:47:54 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _b_sign(NULL), _b_exec(NULL)
{}

OfficeBlock::OfficeBlock(Intern *intern, Bureaucrat *b_s, Bureaucrat *b_e)
: _intern(intern), _b_sign(b_s), _b_exec(b_e)
{}

OfficeBlock::~OfficeBlock()
{}

Bureaucrat	*OfficeBlock::getExec() const
{
	return this->_b_exec;
}

Bureaucrat	*OfficeBlock::getSign() const
{
	return this->_b_sign;
}

Intern		*OfficeBlock::getIntern() const
{
	return this->_intern;
}

void		OfficeBlock::setExec(Bureaucrat *exec)
{
	this->_b_exec = exec;
}

void		OfficeBlock::setIntern(Intern *intern)
{
	this->_intern = intern;
}

void		OfficeBlock::setSign(Bureaucrat *sign)
{
	this->_b_sign = sign;
}

void		OfficeBlock::doBureaucracy(std::string name, std::string target)
{
	Form	*f;
	if (!this->_intern || !this->_b_sign || !this->_b_exec)
		throw StaffNotFormedException();
	f = this->_intern->makeForm(name, target);
	if (!f)
		throw NonexistentFormException();
	this->_b_sign->signForm(*f);
	this->_b_exec->executeForm(*f);
	delete (f);
}
