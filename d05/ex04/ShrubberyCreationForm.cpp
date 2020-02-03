/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:43:57 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 16:43:58 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "./ShrubberyCreationForm.hpp"
#include "./Bureaucrat.hpp"

SCF::SCF() : Form("ShrubberyCreationForm", 137, 145, "SCF_default")
{}

SCF::SCF(std::string target) : Form("ShrubberyCreationForm", 137, 145, target)
{}

SCF::SCF(const SCF &scf)
{
	*this = scf;
}

SCF::~SCF()
{}

SCF 		&SCF::operator=(const SCF &rhs)
{
	(void)rhs;
	return *this;
}

void		SCF::execute(Bureaucrat const &executor) const
{

	if (!this->isSigned())
		throw FormNotSigned();
	else if (executor.getGrade() > this->getGrateToExecute())
		throw ExecuteGradeTooLow();
	else
	{
		std::ofstream file(this->getTarget() + "_shrubbery", std::ios_base::app);
		file << "   *    *  ()   *   *" << std::endl <<
				"*        * vvv         *" << std::endl <<
				"      *   vivvvv    *  *" << std::endl <<
				"    *     ovvvvv  *      *" << std::endl <<
				" *       vvvvvivv    *" << std::endl <<
				"     *  v*vovvvvv *    *" << std::endl <<
				"   *    vivvvv*vvv      *" << std::endl <<
				"       vov*vvvvivvv   *" << std::endl <<
				"  *    vvivvovvvvvvvv     *" << std::endl <<
				"    * v*vvvvvvvvvvvvivv*" << std::endl <<
				" *    vvovvivvvv*vvvvvv   *" << std::endl <<
				"   *vvivvv*vvvvvvvvvvvovv   *" << std::endl <<
				"  *    *   |||||    * " << std::endl;
		file.close();
	}
}