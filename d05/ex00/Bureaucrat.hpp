/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/10 15:05:13 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/10 15:05:15 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D05_BUREAUCRAT_HPP
# define D05_BUREAUCRAT_HPP

# include <string>
# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &o);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat	&operator=(const Bureaucrat &rhs);

	std::string	getName() const;
	int 		getGrade() const;

	void		increment();
	void		decrement();

	struct GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade can't go below 1";
		}
	};

	struct GradeTooLowException : std::exception
	{
		virtual const char *what() const throw()
		{
			return "grade is already at its minimum";
		}
	};

private:
	const std::string	_name;
	int 				_grade;
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &b);

#endif //D05_BUREAUCRAT_HPP
