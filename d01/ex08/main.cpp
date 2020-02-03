/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 20:50:54 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 20:50:56 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Human.hpp"

int 	main()
{
	std::string	target = "Mike";
	Human		human;

	human.action("melee", target);
	human.action("ranged", target);
	human.action("shout", target);
	return (0);
}
