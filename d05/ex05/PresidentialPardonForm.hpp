/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 17:29:08 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 17:29:08 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef D05_PRESIDENTIALPARDONFORM_HPP
# define D05_PRESIDENTIALPARDONFORM_HPP

# include "./Form.hpp"
# define PPF	PresidentialPardonForm

class PresidentialPardonForm : public Form
{
public:
	PPF();
	PPF(std::string target);
	PPF(const PPF &scf);
	~PPF();

	PPF		&operator=(const PPF &rhs);

	void	execute(Bureaucrat const &executor) const;
};


#endif //D05_PRESIDENTIALPARDONFORM_HPP
