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
#include "./ShrubberyCreationForm.hpp"
#include "./RobotomyRequestForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./Intern.hpp"
#include "./OfficeBlock.hpp"
#include "./CentralBureaucracy.hpp"

int 	main()
{
	const char set1[10] = {'M', 'T', 'G', 'K', 'L', 'D', 'R', 'T', 'V', 'P'};
	const char set2[6] = {'a', 'e', 'u', 'i', 'o', 'y'};
	const char set3[10] = {'m', 't', 'g', 'k', 'l', 'd', 'r', 't', 'v', 'p'};

	srand(time(0));
	CentralBureaucracy	cb;

	int i = -1;
	while (++i < 20)
	{
		std::string name;
		int j = -1, times = rand() % 5 + 3;
		name += set1[rand() % 10];
		while (++j < times)
			name += j % 2 ? set3[rand() % 10] : set2[rand() % 6];

		cb.addStaff(new Bureaucrat(name, rand() % 80 + 1));
	}
	i = -1;
	while (++i < 30)
	{
		std::string name;
		int j = -1, times = rand() % 5 + 3;
		name += set1[rand() % 10];
		while (++j < times)
			name += j % 2 ? set3[rand() % 10] : set2[rand() % 6];
		cb.queueUp(name);
	}

	try
	{
		cb.doBureaucracy();
	}
	catch (std::exception &e)
	{
		std::cout << "aw, shit: " << e.what() << std::endl;
	}


	return 0;
}
