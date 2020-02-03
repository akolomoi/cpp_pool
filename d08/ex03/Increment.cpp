/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Increment.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:31:48 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:31:49 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Increment.h"

Increment::Increment(void) {
    _symbol = 'u';
}

Increment::~Increment() {}

void Increment::action(char **array)
{
    (**array)++;
}

void Increment::push_back(std::ifstream &file)
{
	file.close();
}
