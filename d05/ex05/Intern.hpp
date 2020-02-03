/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:03:09 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 18:03:09 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D05_INTERN_HPP
# define D05_INTERN_HPP

# include "./Form.hpp"

class Intern
{
public:
	Intern();
	~Intern();

	Form	*makeForm(std::string type, std::string target);

	struct UnknownFormType : std::exception
	{
		virtual const char *what() const throw()
		{
			return "form type unknown";
		}
	};
private:
	Intern(const Intern &intern);
	Intern	&operator=(const Intern &rhs);

	Form	*makeShru(std::string target);
	Form	*makeRobo(std::string target);
	Form	*makeSorry(std::string target);
};


#endif //D05_INTERN_HPP
