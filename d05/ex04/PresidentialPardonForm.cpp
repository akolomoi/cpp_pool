/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:29:14 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 17:29:14 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PresidentialPardonForm.hpp"
#include "./Bureaucrat.hpp"

PPF::PPF() : Form("PresidentialPardonForm", 5, 25, "PPF_default")
{}

PPF::PPF(std::string target) : Form("PresidentialPardonForm", 5, 25, target)
{}

PPF::PPF(const PPF &scf)
{
	*this = scf;
}

PPF::~PPF()
{}

PPF 		&PPF::operator=(const PPF &rhs)
{
	(void)rhs;
	return *this;
}

void		PPF::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw FormNotSigned();
	else if (executor.getGrade() > this->getGrateToExecute())
		throw ExecuteGradeTooLow();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
