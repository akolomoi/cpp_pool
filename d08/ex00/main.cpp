/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:11:53 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 18:11:53 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "./easyfind.hpp"

void	show(int i)
{
	std::cout << i << ' ';
}

int 	main()
{
	std::list<int> lst;

	for (int i = -10; i <= 10; i++)
		lst.push_back(i);

	for_each(lst.begin(), lst.end(), show);
	std::cout << std::endl;

	*easyfind(lst, 5) = 54321;

	for_each(lst.begin(), lst.end(), show);
	std::cout << std::endl;

	if (easyfind(lst, 5) == lst.end())
		std::cout << "5 is gone" << std::endl;
	return 0;
}
