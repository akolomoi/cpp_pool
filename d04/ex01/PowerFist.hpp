/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:49:45 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 18:49:48 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWER_FIST_H
# define POWER_FIST_H

# include "./AWeapon.hpp"

class	PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(const PowerFist &fist);
	~PowerFist();

	PowerFist		&operator=(const PowerFist &rhs);

	void			attack() const;
};

#endif
