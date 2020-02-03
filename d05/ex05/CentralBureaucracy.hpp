/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CentralBureaucracy.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:46:35 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/11 20:46:37 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D05_CENTRALBUREAUCRACY_HPP
# define D05_CENTRALBUREAUCRACY_HPP

# include "./OfficeBlock.hpp"

class CentralBureaucracy
{
public:
	CentralBureaucracy();
	CentralBureaucracy(const CentralBureaucracy &cb);
	~CentralBureaucracy();

	CentralBureaucracy	&operator=(const CentralBureaucracy &rhs);

	void		addStaff(Bureaucrat *b);
	void		queueUp(std::string s);
	void		doBureaucracy();

	std::string	getQueue(int i) const;

private:
	OfficeBlock	_office[20];
	std::string	_queue[30];
};


#endif //D05_CENTRALBUREAUCRACY_HPP
