/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 19:48:34 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 19:48:35 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

static void	do_some_magic(std::string fname, std::string needle, std::string sample)
{
	std::stringstream		buffer;
	std::string				tmp;
	std::ifstream			ifs;
	size_t					pos;

	ifs.open(fname);
	if (!ifs.good())
	{
		std::cout << "Can't open file." << std::endl;
		return ;
	}
	buffer << ifs.rdbuf();
	if (errno)
	{
		std:: cout << "Error: " << std::strerror(errno) << std::endl;
		return ;
	}

	tmp = buffer.str();
	pos = 0;
	while ((pos = tmp.find(needle, pos)) != std::string::npos)
	{
		tmp.replace(pos, needle.length(), sample);
		pos += needle.length();
	}
	fname += ".replace";

	std::ofstream	out(fname);
	out << tmp;
	out.close();
	ifs.close();
}

int 		main(int ac, char *av[])
{
	if (ac == 4)
		do_some_magic(av[1], av[2], av[3]);
	else
		std::cout << "usage: ./replace [filename] [string to replace] [string to insert]" << std::endl;
	return (0);
}
