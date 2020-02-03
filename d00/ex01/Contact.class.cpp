/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 19:21:18 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 19:21:19 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Contact.class.hpp"

Contact::Contact(void){}
Contact::~Contact(void){}


void		Contact::add_contact()
{
	std::cout << "(+) creating new contact." << std::endl;
	Contact::set_fld(FIRST_NAME);
	Contact::set_fld(LAST_NAME);
	Contact::set_fld(NICKNAME);
	Contact::set_fld(LOGIN);
	Contact::set_fld(POSTAL_ADDRESS);
	Contact::set_fld(EMAIL_ADDRESS);
	Contact::set_fld(PHONE_NUMBER);
	Contact::set_fld(BIRTHDAY_DATE);
	Contact::set_fld(FAVORITE_MEAL);
	Contact::set_fld(UNDERWEAR_COLOR);
	Contact::set_fld(DARKEST_SECRET);
	std::cout << "(+) contact created." << std::endl;
}

void		Contact::set_fld(int n)
{
	std::string	tmp;

	tmp = "";
	std::cout << "enter " << get_fld_name(n) << ": ";
	while (tmp.length() < 1)
		std::cin >> tmp;
	this->_fields[n] = tmp;
}

std::string	Contact::get_fld(int n) const
{
	return (this->_fields[n]);
}

std::string	Contact::get_fld_name(int n) const
{
	if (n == FIRST_NAME)
		return ("first name");
	else if (n == LAST_NAME)
		return ("last name");
	else if (n == NICKNAME)
		return ("nickname");
	else if (n == LOGIN)
		return ("login");
	else if (n == POSTAL_ADDRESS)
		return ("postal address");
	else if (n == EMAIL_ADDRESS)
		return ("email address");
	else if (n == PHONE_NUMBER)
		return ("phone number");
	else if (n == BIRTHDAY_DATE)
		return ("birthday date");
	else if (n == FAVORITE_MEAL)
		return ("favorite meal");
	else if (n == UNDERWEAR_COLOR)
		return ("underwear color");
	else if (n == DARKEST_SECRET)
		return ("darkest secret");
	return ("wha?");
}
