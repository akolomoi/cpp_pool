/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:46:29 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 20:46:30 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./CentralBureaucracy.hpp"

CentralBureaucracy::CentralBureaucracy()
{
	int i = -1;
	while (++i < 20)
		_office[i].setIntern(new Intern());
}

CentralBureaucracy::CentralBureaucracy(const CentralBureaucracy &cb)
{
	*this = cb;
}

CentralBureaucracy::~CentralBureaucracy()
{}

CentralBureaucracy	&CentralBureaucracy::operator=(const CentralBureaucracy &cb)
{
	int i = -1;
	while (++i < 20)
	{
		this->_office[i].setExec(cb._office[i].getExec());
		this->_office[i].setSign(cb._office[i].getSign());
	}
	i = -1;
	while (++i < 30)
		this->_queue[i] = cb.getQueue(i);
	return *this;
}

void		CentralBureaucracy::addStaff(Bureaucrat *b)
{
	int i = -1;
	while (++i < 20)
		if (!this->_office[i].getSign())
		{
			this->_office[i].setSign(b);
			return ;
		}
		else if (!this->_office[i].getExec())
		{
			this->_office[i].setExec(b);
			return ;
		}
}

void		CentralBureaucracy::queueUp(std::string s)
{
	int i = -1;
	while (++i < 30)
		if (this->_queue[i].empty())
		{
			this->_queue[i] = s;
			return;
		}
}

std::string		CentralBureaucracy::getQueue(int i) const
{
	return this->_queue[i];
}

void			CentralBureaucracy::doBureaucracy()
{
	static std::string	types[3] = {
			"robotomy request", "shrubbery creation", "presidential pardon"
	};

	int i = 0, j = 0;
	while (i < 30 && !this->_queue[i].empty())
	{
		std::cout << "Form #" << i + 1 << ", office block " << j << std::endl;
		this->_office[j].doBureaucracy(types[rand() % 3], this->_queue[i]);
		j++;
		if (!this->_office[j].getExec() || !this->_office[j].getSign())
			j = 0;
		i++;
	}
}
