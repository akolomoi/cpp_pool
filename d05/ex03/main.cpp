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

int 	main()
{
	srand(time(0));
	Intern	i;
//	Bureaucrat	*a = new Bureaucrat("Mike", 50);
//	Bureaucrat	*s = new Bureaucrat("Sam", 1);

	Form *tree = i.makeForm("shrubbery creation", "tree");
	Form *robo = i.makeForm("robotomy request", "Bob");
	Form *sorry = i.makeForm("presidential pardon", "Obama");
	Form *smh = i.makeForm("smh", "lul");
	(void)smh;
/*
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
*/
	std::cout << std::endl << *tree << std::endl << *robo << std::endl << *sorry << std::endl;
	return 0;
}
