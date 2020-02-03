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

int 	main()
{
	Bureaucrat	*a, *b, *c, *d;

	try
	{
		d = new Bureaucrat("Main", 0);
		std::cout << d << std::endl;;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		b = new Bureaucrat("Bob", 151);
		std::cout << b << std::endl;;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		c = new Bureaucrat("Low", 0);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		a = new Bureaucrat("Good", 5);
		while (true)
		{
			std::cout << *a << std::endl;
			a->increment();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
