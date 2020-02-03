/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:41:50 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:41:51 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ISPACEMARINE_H
# define ISPACEMARINE_H

class	ISpaceMarine
{
public:
	virtual			~ISpaceMarine() {}

	virtual			ISpaceMarine* clone() const = 0;
	virtual void	battleCry() const = 0;
	virtual void	rangedAttack() const = 0;
	virtual void	meleeAttack() const = 0;
};

#endif
