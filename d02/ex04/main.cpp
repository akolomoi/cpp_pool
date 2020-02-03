/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 19:48:10 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/05 19:48:11 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Fixed.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cout << "usage: ./eval_expr [expr]" << std::endl;
		return (0);
	}
	Fixed f = Fixed::calculate(av[1]);
	std::cout << f << std::endl;
	return (0);
}
