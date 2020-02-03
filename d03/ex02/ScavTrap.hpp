/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 19:23:36 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/06 19:24:10 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

# include <iostream>
# include <string>
# include "./ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const ScavTrap &unit);
	ScavTrap(std::string name);
	ScavTrap &operator=(const ScavTrap &rhs);
	~ScavTrap();

	void	rangedAttack(std::string const &target) const;
	void	meleeAttack(std::string const &target) const;

	void	challengeNewcomer(std::string const &target);

private:
	ScavTrap();
};

#endif
