/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:41:33 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:41:33 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int 	main()
{
	std::string	brain;
	std::string	*brain_pointer = &brain;
	std::string	&brain_reference = brain;

	brain = "HI THIS IS BRAIN";
	std::cout << "pointer: " << *brain_pointer << std::endl
	<< "reference: " << brain_reference << std::endl;
	return (0);
}
