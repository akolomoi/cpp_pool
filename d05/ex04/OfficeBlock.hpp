/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:47:59 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 18:48:00 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D05_OFFICEBLOCK_HPP
# define D05_OFFICEBLOCK_HPP

# include "./Bureaucrat.hpp"
# include "./Intern.hpp"

class OfficeBlock
{
public:
	OfficeBlock();
	OfficeBlock(Intern *intern, Bureaucrat *b_s, Bureaucrat *b_e);
	~OfficeBlock();

	Bureaucrat	*getSign() const;
	Bureaucrat	*getExec() const;
	Intern		*getIntern() const;

	void		setIntern(Intern *intern);
	void		setSign(Bureaucrat *sign);
	void		setExec(Bureaucrat *exec);

	void		doBureaucracy(std::string name, std::string target);

	struct StaffNotFormedException : std::exception
	{
		virtual const char	*what() const throw()
		{
			return "staff is not formed";
		}
	};

	struct NonexistentFormException : std::exception
	{
		virtual const char	*what() const throw()
		{
			return "form is empty";
		}
	};

private:
	Intern		*_intern;
	Bureaucrat	*_b_sign, *_b_exec;
};

#endif //D05_OFFICEBLOCK_HPP
