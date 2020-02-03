/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 14:33:43 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/13 14:33:44 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void	iter(T *arr, size_t size, void (*f)(T&))
{
	size_t i = 0;
	while (i < size)
	{
		f(arr[i]);
		i++;
	}
}

void	magic(std::string &str)
{
	std::string tmp;
	tmp = str;

	std::reverse(str.begin(), str.end());
	tmp += "|" + str;
	str = tmp;
}

void	show(std::string &str)
{
	std::cout << str << std::endl;
}

int 	main()
{
	std::string s[] = {
			"abc", "cde", "efg", "ghi", "ijk", "klm", "mno", "opq"
	};

	iter<std::string>(s, 8, magic);
	iter<std::string>(s, 8, show);

	return 0;
}
