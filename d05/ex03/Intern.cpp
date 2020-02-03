/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:03:14 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 18:03:14 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Intern.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"
#include "./RobotomyRequestForm.hpp"

Intern::Intern()
{}

Intern::Intern(const Intern &intern)
{
	*this = intern;
}

Intern::~Intern()
{}

Intern	&Intern::operator=(const Intern &rhs)
{
	(void)rhs;
	return *this;
}

Form	*Intern::makeRobo(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*Intern::makeShru(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeSorry(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::makeForm(std::string type, std::string target)
{
	Form		*f = NULL;
	static 		Form	*(Intern::*arr[3])(std::string) = {
			&Intern::makeRobo, &Intern::makeShru, &Intern::makeSorry
	};
	static std::string	types[3] = {
			"robotomy request", "shrubbery creation", "presidential pardon"
	};

	try
	{
		int i = -1;
		while (++i < 3)
			if (type == types[i])
				f = (this->*(arr[i]))(target);
		if (!f)
			throw UnknownFormType();
	}
	catch (std::exception &e)
	{
		std::cout << "Intern couldn't create a form: " << e.what() << std::endl;
		return NULL;
	}
	std::cout << "Intern creates " << f->getName() << std::endl;
	return f;
}
