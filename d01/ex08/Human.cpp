/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:50:42 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 20:50:43 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Human.hpp"

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Using ranged attack! " << target << " avoided the attack!" << std::endl;
}

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Using melee attack! " << target << " is crippled!" << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Using intimidating shout! " << target << " is scared!" << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	int 	i;
	const std::string	moves[3] = {"melee", "ranged", "shout"};
	void (Human::*actions[3])(const std::string &target) = {
		&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout
	};

	i = -1;
	while (++i < 3)
		if (action_name == moves[i])
			(this->*(actions[i]))(target);
}
