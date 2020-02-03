/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:15:17 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 17:15:19 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef D05_ROBOTOMYREQUESTFORM_HPP
# define D05_ROBOTOMYREQUESTFORM_HPP

# include "./Form.hpp"
# define RRF	RobotomyRequestForm

class RobotomyRequestForm : public Form
{
public:
	RRF();
	RRF(std::string target);
	RRF(const RRF &scf);
	~RRF();

	RRF		&operator=(const RRF &rhs);

	void	execute(Bureaucrat const &executor) const;
};


#endif //D05_ROBOTOMYREQUESTFORM_HPP
