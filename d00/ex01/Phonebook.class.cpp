/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:17:40 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 19:17:41 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "./Phonebook.class.hpp"

Phonebook::Phonebook() : _n_contacts(0)
{
	std::cout << "PhoneBook opened." << std::endl;
}
Phonebook::~Phonebook()
{
	std::cout << "PhoneBook closed." << std::endl;
}

void	Phonebook::add_contact()
{
	if (this->_n_contacts >= MAX_CONTACTS)
	{
		std::cout << "(!) max number of contacts reached" << std::endl;
		return ;
	}
	this->_contacts[this->_n_contacts++].add_contact();
}

void	Phonebook::print_contact_header() const
{
	std::cout << "|     index|first name| last name|  nickname|"
	<< std::endl;
}

std::string	Phonebook::normalize_str(std::string str) const
{
	if (str.length() > 10)
	{
		str[9] = '.';
		str = str.erase(10, str.length() - 10);
	}
	return (str);
}

void	Phonebook::display_contact_data(int n) const
{
	std::string	tmp;

	std::putchar('|');
	std::cout << std::setw(10) << n;
	std::putchar('|');
	tmp = normalize_str(this->_contacts[n].get_fld(FIRST_NAME));
		std::cout << std::setw(10) << tmp;
	std::putchar('|');
	tmp = normalize_str(this->_contacts[n].get_fld(LAST_NAME));
		std::cout << std::setw(10) << tmp;
	std::putchar('|');
	tmp = normalize_str(this->_contacts[n].get_fld(NICKNAME));
		std::cout << std::setw(10) << tmp;
	std::putchar('|');
	std::cout << std::endl;
}

void	Phonebook::display_contact_param(int param) const
{
	int i;

	if (param < 0 || param > this->_n_contacts - 1)
	{
		std::cout << "(-) contact doesn't exist." << std::endl;
		return ;
	}
	i = -1;
	while (++i < N_FIELDS)
	{
		std::cout << this->_contacts[param].get_fld_name(i) << ": "
		<< this->_contacts[param].get_fld(i) << std::endl;
	}
}

int		Phonebook::display_contacts() const
{
	int i;

	if (this->_n_contacts == 0)
	{
		std::cout << "(phonebook is empty)" << std::endl;
		return (0);
	}
	i = -1;
	print_contact_header();
	while (++i < this->_n_contacts)
	{
		display_contact_data(i);
	}
	return (1);
}
