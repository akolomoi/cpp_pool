/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 18:20:47 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 18:20:48 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
public:
	Weapon(std::string type);
	~Weapon();

	const std::string	&getType() const;
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif
