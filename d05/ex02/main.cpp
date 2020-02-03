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

int 	main()
{
	srand(time(0));
	Bureaucrat	*a = new Bureaucrat("Mike", 50);
	Bureaucrat	*s = new Bureaucrat("Sam", 1);
	ShrubberyCreationForm *tree = new ShrubberyCreationForm("tree");
	RobotomyRequestForm	*robo = new RobotomyRequestForm("Bob");
	PresidentialPardonForm	*sorry = new PresidentialPardonForm("Obama");

	a->signForm(*sorry);

	a->signForm(*tree);
	a->signForm(*robo);
	s->executeForm(*sorry);
	s->signForm(*sorry);
	std::cout << std::endl;

	a->executeForm(*tree);
	s->executeForm(*robo);
	s->executeForm(*sorry);
	a->executeForm(*robo);
	a->executeForm(*sorry);

	std::cout << std::endl << *a << std::endl << *s << std::endl << std::endl
			<< *tree << std::endl << *robo << std::endl << *sorry << std::endl;
	return 0;
}
