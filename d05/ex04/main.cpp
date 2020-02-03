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

int 	main()
{
	srand(time(0));
	try
	{
		OfficeBlock	o;
		Intern	*i = new Intern();
		Bureaucrat	*a = new Bureaucrat("Mike", 50);
		Bureaucrat	*s = new Bureaucrat("Sam", 1);

		o.setIntern(i);
		o.setExec(s);
		o.setSign(a);

		o.doBureaucracy("shrubbery creation", "tree");
		o.doBureaucracy("robotomy request", "Bob");
		o.doBureaucracy("presidential pardon", "Obama");
		o.doBureaucracy("smh", "lul");
	}
	catch (std::exception &e)
	{
		std::cout << "office cannot do the bureaucracy: " << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Intern	*i = new Intern();
		Bureaucrat	*a = new Bureaucrat("Mike", 50);
		Bureaucrat	*s = new Bureaucrat("Sam", 1);
		OfficeBlock o(i, a, s);

		o.doBureaucracy("shrubbery creation", "tree");
		o.doBureaucracy("robotomy request", "Bob");
		o.doBureaucracy("presidential pardon", "Obama");
		o.doBureaucracy("smh", "lul");
	}
	catch (std::exception &e)
	{
		std::cout << "office cannot do the bureaucracy: " << e.what() << std::endl;
	}
	std::cout << std::endl << "(office_3)" << std::endl;
	try
	{
		OfficeBlock	o;
		Intern	*i = new Intern();
		Bureaucrat	*a = new Bureaucrat("Mike", 50);

		o.setIntern(i);
		o.setSign(a);

		o.doBureaucracy("shrubbery creation", "tree");
		o.doBureaucracy("robotomy request", "Bob");
		o.doBureaucracy("presidential pardon", "Obama");
		o.doBureaucracy("smh", "lul");

	}
	catch (std::exception &e)
	{
		std::cout << "office cannot do the bureaucracy: " << e.what() << std::endl;
	}
	return 0;
}
