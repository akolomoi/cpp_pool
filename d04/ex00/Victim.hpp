/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:42:04 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:42:04 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_H
# define VICTIM_H

# include <string>
# include <iostream>

class Victim
{
public:
	Victim(std::string name);
	Victim(const Victim &clone);
	~Victim();

	Victim		&operator=(const Victim &rhs);

	virtual void	getPolymorphed() const;

	std::string		getName() const;

protected:
	Victim();
	std::string	_name;
};

std::ostream	&operator<<(std::ostream &o, const Victim &vict);

#endif
