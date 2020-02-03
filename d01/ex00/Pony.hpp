/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 17:57:57 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/03 17:57:58 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_H
# define PONY_H

#include <string>

class Pony
{
public:
	Pony(std::string name);
	~Pony();

	void		Hit(int damage);
	void		Eat(unsigned int kg);
	void		Grow();

private:
	bool		IsAlive();
	void		MsgDead();

	std::string	_name;
	int			_age;
	int 		_weight;
	int 		_hitpoints;
};

#endif
