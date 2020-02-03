/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:50:00 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:50:01 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAD_SCORPION_H
# define RAD_SCORPION_H

# include "./Enemy.hpp"

class	RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(const RadScorpion &m);
	~RadScorpion();

	RadScorpion		&operator=(const RadScorpion &m);
};

#endif
