/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:50:12 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:50:13 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_MUTANT_H
# define SUPER_MUTANT_H

# include "./Enemy.hpp"

class	SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(const SuperMutant &m);
	~SuperMutant();

	SuperMutant		&operator=(const SuperMutant &m);

	void			takeDamage(int dmg);
};

#endif