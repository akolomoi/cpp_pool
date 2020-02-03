/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:05:19 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/10 15:05:20 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("nameless"), _grade(150)
{}

Bureaucrat::Bureaucrat(const Bureaucrat &o) : _name("nameless")
{
	*this = o;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_grade = rhs.getGrade();
	return *this;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int 		Bureaucrat::getGrade() const
{
	return this->_grade;
}

void		Bureaucrat::increment()
{
	if (this->_grade <= 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void		Bureaucrat::decrement()
{
	if (this->_grade >= 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

void		Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->_name << " signed form " << form.getName() << "." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign form " << form.getName()
		<< " because his " << e.what() << "." << std::endl;
	}

}

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return o;
}
