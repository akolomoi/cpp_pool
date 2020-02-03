/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 15:14:57 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/13 15:14:58 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Array.tpp"

int		main()
{
	Array<char>		c(20);

	for (unsigned int i = 0; i < c.size(); i++)
	{
		c[i] += 'a' + i;
		std::cout << c[i];
	}
	std::cout << std::endl;

	Array<char>		b(c);
	for (unsigned int i = 0; i < b.size(); i++)
	{
		b[i] = std::toupper(b[i]) + 1;
		std::cout << b[i];
	}
	std::cout << std::endl;

	Array<char>		a;
	try
	{
		a[1] += 'a';
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	a = b;
	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i] -= 'A';
		a[i] %= 10;
		a[i] += '0';
		std::cout << a[i];
	}
	std::cout << std::endl;

	Array<char>	*smh = new Array<char>(15);
	delete (smh);
	//system("leaks --quiet ex02");

	return 0;
}
