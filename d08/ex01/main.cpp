/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:35:06 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 18:35:06 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./span.hpp"

int		main()
{
	std::vector<int> vec;
	for (int i = 0; i < 666666; i++)
		vec.push_back(i * 2);

	Span s(333334);
	try
	{
		s.addRange(vec.begin(), vec.end());
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "shortest span: " << s.shortestSpan()
	<< std::endl << "longest span: " << s.longestSpan() << std::endl;

	Span w(3);
	w.addNumber(1);

	try
	{
		w.longestSpan();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
