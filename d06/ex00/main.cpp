/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 16:34:02 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/12 16:34:03 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <cfloat>

static void	display_int(long double nbr)
{
	std::cout << "int: ";
	if (nbr >= INT_MIN && nbr <= INT_MAX)
		std::cout << static_cast<int>(nbr) << std::endl;
	else
		std::cout << "impossible" << std::endl;

}

static void	display_double(long double nbr, std::string s_nbr)
{
	std::cout << "double: ";
	if (nbr < -DBL_MAX || s_nbr == "-inf")
		std::cout << "-inf" << std::endl;
	else if (nbr > DBL_MAX || s_nbr == "+inf")
		std::cout << "+inf" << std::endl;
	else if (nbr >= -DBL_MAX && nbr <= DBL_MAX)
	{
		if (nbr == static_cast<double>(nbr))
			std::cout << std::setprecision(1) << std::fixed << static_cast<double>(nbr) << std::endl;
		else
			std::cout << static_cast<double>(nbr) << std::endl;
	}
	else if (s_nbr == "nan" || s_nbr == "nanf")
		std::cout << "nan" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

static void	display_float(long double nbr, std::string s_nbr)
{
	std::cout << "float: ";
	if (nbr < -FLT_MAX || s_nbr == "-inff")
		std::cout << "-inff" << std::endl;
	else if (nbr > FLT_MAX || s_nbr == "+inff")
		std::cout << "+inff" << std::endl;
	else if (nbr >= -FLT_MAX && nbr <= FLT_MAX)
	{
		if (nbr == static_cast<int>(nbr))
			std::cout << std::setprecision(1) << std::fixed
					  << static_cast<float>(nbr) << 'f' << std::endl;
		else
			std::cout << static_cast<float>(nbr) << 'f' << std::endl;
	}
	else if (s_nbr == "nan" || s_nbr == "nanf")
		std::cout << "nanf" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

static void	display_char(long double nbr)
{
	std::cout << "char: ";
	if (nbr >= 0 && nbr < ' ')
		std::cout << "Non displayable" << std::endl;
	else if (nbr > 31 && nbr < 128)
		std::cout << '\'' << static_cast<char>(nbr) << '\'' << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "usage: ./convert [string]" << std::endl;
		return (1);
	}

	long double nbr;
	try
	{
		nbr = std::stold(av[1]);
	}
	catch (const std::exception& e)
	{
		std::cout << "Bad input." << std::endl;
		return (1);
	}

	display_char(nbr);
	display_int(nbr);
	std::string str(av[1]);
	display_float(nbr, str);
	display_double(nbr, str);

	return (0);
}
