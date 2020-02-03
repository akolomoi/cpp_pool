/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 21:14:16 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 21:14:17 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_H
# define SUPER_TRAP_H

# include <iostream>
# include <string>
# include "./NinjaTrap.hpp"
# include "./FragTrap.hpp"

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap : public virtual FragTrap, public virtual NinjaTrap
{
public:
	SuperTrap();
	SuperTrap(const std::string name);
	SuperTrap(const SuperTrap &obj);
	~SuperTrap(void);

	SuperTrap &	operator=(const SuperTrap &rhs);
	void rangedAttack(std::string const & target) const;
	void meleeAttack(std::string const & target) const;
};

#endif
