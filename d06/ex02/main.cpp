/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:49:10 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/12 17:49:11 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Classes.hpp"

Base::~Base(){}

Base	*class_b() { return new B; }

Base	*class_c() { return new C; }

Base	*class_a() { return new A; }

Base	*some_class()
{
	static Base *(*f[3])() = {
			&class_a, &class_b, &class_c
	};
	return f[rand() % 3]();
}

void	identify_from_pointer(Base *p)
{
	char res = '/';
	if (dynamic_cast<A*>(p) == p)
		res = 'A';
	else if (dynamic_cast<B*>(p) == p)
		res = 'B';
	else if (dynamic_cast<C*>(p) == p)
		res = 'C';
	std::cout << res << std::endl;
}

void	identify_from_reference(Base &p)
{
	Base	tmp;
	char	res;
	try
	{
		tmp = dynamic_cast<A&>(p);
		res = 'A';
	}
	catch (std::exception &e)
	{
		try
		{
			tmp = dynamic_cast<B&>(p);
			res = 'B';
		}
		catch (std::exception &e)
		{
			res = 'C';
		}
	}
	std::cout << res << std::endl;
}

int		main()
{
	srand(time(0));

	Base *rnd = some_class();

	std::cout << "pointer: ";
	identify_from_pointer(rnd);

	std::cout << "reference: ";
	identify_from_reference(*rnd);

	return 0;
}
