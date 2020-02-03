/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:42:52 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:42:53 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef TACTICAL_MARINE_H
# define TACTICAL_MARINE_H

# include "./ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	public:

		TacticalMarine();
		TacticalMarine(TacticalMarine const &obj);
		virtual ~TacticalMarine();
		TacticalMarine &operator=(TacticalMarine const &r);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
