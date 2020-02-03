/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:15:24 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 17:15:27 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RobotomyRequestForm.hpp"
#include "./Bureaucrat.hpp"

RRF::RRF() : Form("RobotomyRequestForm", 45, 72, "RRF_default")
{}

RRF::RRF(std::string target) : Form("RobotomyRequestForm", 45, 72, target)
{}

RRF::RRF(const RRF &scf)
{
	*this = scf;
}

RRF::~RRF()
{}

RRF 		&RRF::operator=(const RRF &rhs)
{
	(void)rhs;
	return *this;
}

void		RRF::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw FormNotSigned();
	else if (executor.getGrade() > this->getGrateToExecute())
		throw ExecuteGradeTooLow();
	else
		std::cout << this->getTarget() << (rand() % 2
		? " was robotomized successfully."
		: " wasn't robotomized") << std::endl;
}
