/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:49:25 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:49:26 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMA_RIFLE_H
# define PLASMA_RIFLE_H

# include "./AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &rifle);
	~PlasmaRifle();

	PlasmaRifle		&operator=(const PlasmaRifle &rhs);

	void			attack() const;
};

#endif
