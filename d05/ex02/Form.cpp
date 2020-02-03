/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:00:30 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/10 17:00:31 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Form.hpp"
#include "./Bureaucrat.hpp"

Form::Form() : _name("untitled"), _grade_to_e(150), _grade_to_s(150), _signed(false)
{}

Form::Form(std::string name, int gte, int gts)
: _name(name), _grade_to_e(gte), _grade_to_s(gts), _signed(false)
{
	if (gte > 150 || gts > 150)
		throw GradeTooLowException();
	else if (gte < 1 || gts < 1)
		throw GradeTooHighException();
}

Form::Form(std::string name, int gte, int gts, std::string target)
		: _name(name), _grade_to_e(gte), _grade_to_s(gts), _signed(false), _target(target)
{
	if (gte > 150 || gts > 150)
		throw GradeTooLowException();
	else if (gte < 1 || gts < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &f)
: _name(f.getName()), _grade_to_e(f.getGrateToExecute()), _grade_to_s(f.getGradeToSign()), _signed(false)
{
	*this = f;
}

Form::~Form()
{}

Form	&Form::operator=(const Form &rhs)
{
	this->_signed = rhs.isSigned();
	this->_target = rhs.getTarget();
	return *this;
}

std::string	Form::getTarget() const
{
	return this->_target;
}

std::string	Form::getName() const
{
	return this->_name;
}

int 		Form::getGradeToSign() const
{
	return this->_grade_to_s;
}

int 		Form::getGrateToExecute() const
{
	return this->_grade_to_e;
}

bool		Form::isSigned() const
{
	return this->_signed;
}

void		Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() > this->_grade_to_s)
		throw GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream	&operator<<(std::ostream &o, const Form &f)
{
	o << "Form " << f.getName() << ", grade to sign " << f.getGradeToSign()
	<< ", grade to execute " << f.getGrateToExecute()
	<< (f.isSigned() ? ", is signed." : ", is not signed.");
	return o;
}
