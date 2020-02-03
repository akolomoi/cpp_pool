/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:41:35 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 20:41:36 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ASSAULT_TERMINATOR_H
# define ASSAULT_TERMINATOR_H

# include "./ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	public:

		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const &obj);
		virtual ~AssaultTerminator();
		AssaultTerminator &operator=(AssaultTerminator const &r);

		ISpaceMarine*	clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
