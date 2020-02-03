/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 16:33:54 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 16:33:55 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef D05_SHRUBBERYCREATIONFORM_HPP
# define D05_SHRUBBERYCREATIONFORM_HPP

# include "./Form.hpp"
# define SCF	ShrubberyCreationForm

class ShrubberyCreationForm : public Form
{
public:
	SCF();
	SCF(std::string target);
	SCF(const SCF &scf);
	~SCF();

	SCF		&operator=(const SCF &rhs);

	void	execute(Bureaucrat const &executor) const;
};


#endif //D05_SHRUBBERYCREATIONFORM_HPP
