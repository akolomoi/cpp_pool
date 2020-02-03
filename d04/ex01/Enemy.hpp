/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:48:58 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:48:59 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_H
# define ENEMY_H

# include <string>

class Enemy
{
public:
	Enemy();
	Enemy(const Enemy &enemy);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();

	Enemy	&operator=(const Enemy &enemy);

	std::string		getType() const;
	int				getHP() const;
	virtual void 	takeDamage(int dmg);

private:
	int 		_hp;
	std::string	_type;
};

#endif
