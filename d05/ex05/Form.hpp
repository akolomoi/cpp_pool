/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 17:00:36 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/10 17:00:37 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D05_FORM_HPP
# define D05_FORM_HPP

# include <string>
# include <iostream>


class Bureaucrat;

class Form
{
public:
	Form();
	Form(std::string name, int gte, int gts);
	Form(std::string name, int gte, int gts, std::string target);
	Form(const Form &f);
	virtual ~Form();

	Form	&operator=(const Form &rhs);

	std::string		getName() const;
	std::string		getTarget() const;
	int 			getGradeToSign() const;
	int 			getGrateToExecute() const;
	bool			isSigned() const;

	void			beSigned(Bureaucrat &b);
	virtual void	execute(Bureaucrat const & executor) const = 0;

	struct GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade is too high";
		}
	};

	struct GradeTooLowException : std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade is too low";
		}
	};

	struct FormNotSigned : std::exception
	{
		virtual const char *what() const throw()
		{
			return "form is not signed";
		}
	};

	struct ExecuteGradeTooLow : std::exception
	{
		virtual const char *what() const throw()
		{
			return "bureaucrat's grade is too low to execute the form.";
		}
	};

private:
	const std::string	_name;
	const int 			_grade_to_e, _grade_to_s;
	bool				_signed;
	std::string			_target;
};

std::ostream	&operator<<(std::ostream &o, const Form &f);

#endif //D05_FORM_HPP
