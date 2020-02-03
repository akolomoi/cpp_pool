/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:20:11 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/12 17:20:12 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "./struct.hpp"

char	rand_num()
{
	return (rand() % ('9' - '0') + '0');
}

char	rand_upper()
{
	return (rand() % ('Z' - 'A') + 'A');
}

char	rand_lower()
{
	return (rand() % ('z' - 'a') + 'a');
}

void	*serialize()
{
	char *arr = new char[20];
	char (*f[3])() = {
			&rand_num, &rand_lower, &rand_upper
	};

	for (int i = 0; i < 8; i++)
		arr[i] = f[rand() % 3]();
	*(reinterpret_cast<int *>(arr + 8)) = rand();
	for (int i = 12; i < 20; i++)
		arr[i] = f[rand() % 3]();
	return arr;
}

Data	*deserialize(void *raw)
{
	char	*arr = reinterpret_cast<char*>(raw);
	Data	*res = new Data;

	for (int i = 0; i < 8; i++)
		res->str1 += arr[i];
	res->num = *(reinterpret_cast<int*>(arr + 8));
	for (int i = 12; i < 20; i++)
		res->str2 += arr[i];
	return res;
}

int 	main()
{
	srand(time(0));

	Data *d = deserialize(serialize());
	std::cout << d->str1 << std::endl
			<< d->num << std::endl
			<< d->str2 << std::endl;
	return 0;
}