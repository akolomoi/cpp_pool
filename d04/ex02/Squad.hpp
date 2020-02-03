/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:42:23 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:42:25 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SQUAD_H
# define SQUAD_H

# include "./ISquad.hpp"
# include "./ISpaceMarine.hpp"


typedef struct			_marinelist
{
	ISpaceMarine 		*marine;
	struct _marinelist	*next;
}						t_marinelist;

class	Squad : public ISquad
{
public:
	Squad();
	Squad(Squad &obj);
	virtual ~Squad();
	Squad &operator=(Squad const &r);

	int				getCount() const;
	ISpaceMarine*	getUnit(int i) const;
	int				push(ISpaceMarine* m);

private:
	int					_unit;
	struct _marinelist	*_marine;
};

#endif
