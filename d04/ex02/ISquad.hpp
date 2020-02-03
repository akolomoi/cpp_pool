/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:42:00 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:42:01 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_H
# define ISQUAD_H

# include "./ISpaceMarine.hpp"

class ISquad
{
public:
	virtual			~ISquad() {}

	virtual int		getCount() const = 0;
	virtual			ISpaceMarine* getUnit(int i) const = 0;
	virtual int		push(ISpaceMarine* m) = 0;
};

#endif
