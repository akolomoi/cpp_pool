/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:31:42 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 15:31:43 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
public:
	Zombie();
	~Zombie();

	std::string	name() const;
	std::string	type() const;
	void		announce() const;
	void		set_type(std::string type);
	void		set_name(std::string name);

private:
	std::string	_name;
	std::string	_type;
};

#endif
