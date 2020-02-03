/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decrement.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:28:02 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:28:03 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Decrement.h"

Decrement::Decrement()
{
    _symbol = 'd';
}

Decrement::~Decrement() {}

void Decrement::action(char **array)
{
    (**array)--;
}

void Decrement::push_back(std::ifstream &file)
{
	file.close();
}
