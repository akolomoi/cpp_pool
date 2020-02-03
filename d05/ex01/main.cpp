/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:05:25 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/10 15:05:26 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"
#include "./Form.hpp"

int 	main()
{
	Bureaucrat	*a = new Bureaucrat("Mike", 80);
	Form		*b = new Form("28B", 70, 90);
	Form		*c = new Form("28C", 60, 70);

	std::cout << *a << std::endl << *b << std::endl << *c << std::endl << std::endl;

	a->signForm(*b);
	a->signForm(*c);

	std::cout << std::endl << *a << std::endl << *b << std::endl << *c << std::endl;
	return 0;
}
