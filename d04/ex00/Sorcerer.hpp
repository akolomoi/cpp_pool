/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:41:50 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:41:51 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_H
# define SORCERER_H

# include <string>
# include <iostream>
# include "./Victim.hpp"

class Sorcerer
{
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &clone);
	~Sorcerer();

	Sorcerer	&operator=(const Sorcerer &rhs);

	void		polymorph(Victim const &victim) const;

	std::string	getName() const;
	std::string	getTitle() const;

private:
	Sorcerer();
	std::string	_name, _title;
};

std::ostream	&operator<<(std::ostream &o, const Sorcerer &sorc);

#endif
