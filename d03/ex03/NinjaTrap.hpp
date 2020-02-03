/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 20:11:03 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 20:11:05 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_H
# define NINJA_TRAP_H

# include <iostream>
# include <string>
# include "./ClapTrap.hpp"
# include "./ScavTrap.hpp"
# include "./FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap(const NinjaTrap &unit);
	NinjaTrap &operator=(const NinjaTrap &rhs);
	~NinjaTrap();

	NinjaTrap(std::string name);

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;

	void	ninjaShoebox(const FragTrap &fragTrap);
	void	ninjaShoebox(const ScavTrap &scavTrap);
	void	ninjaShoebox(const NinjaTrap &ninjaTrap);
	void	ninjaShoebox(const ClapTrap &clapTrap);

private:
	NinjaTrap();
};

#endif
