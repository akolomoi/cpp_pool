/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:50:32 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 18:50:34 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "./Phonebook.class.hpp"

static void	get_index(Phonebook *book)
{
	std::string s;

	std::cout << "(?) enter contact's index: ";
	std::cin >> s;
	if (s[0] > '9' || s[0] < '0')
	{
		std::cout << "(!) NaN." << std::endl;
		return ;
	}
	if (s.length() != 1)
	{
		std::cout << "(!) contact doesn't exist." << std::endl;
		return ;
	}
	book->display_contact_param((int)(s[0] - '0'));
}

int 		main()
{
	std::string	command;
	Phonebook	book;

	std::cin.setf(std::ios_base::skipws);
	while (command.compare("EXIT") != 0)
	{
		std::cin >> command;
		if (command.compare("ADD") == 0)
			book.add_contact();
		else if (command.compare("SEARCH") == 0)
			if (book.display_contacts())
				get_index(&book);
	}
	return (0);
}

