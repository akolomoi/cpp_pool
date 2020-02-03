/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 22:23:53 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 22:23:54 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int main(int ac, char **av)
{
	std::stringstream buf;
	std::ifstream file;

	if (ac == 1)
	{
		std::cout << std::cin.rdbuf();
		return (0);
	}
	int i = 0;
	while (++i < ac)
	{
		if ((std::string)av[i] == "-")
			std::cout << std::cin.rdbuf();
		else
		{
			file.open(av[i]);
			buf << file.rdbuf();
			std::cout << buf.str();
			file.close();
		}
		if(errno)
			std::cerr << av[0] << ": " << av[i] << ' ' << std::strerror(errno) << std::endl;
	}
	return (0);
}
