/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PutChar.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:37:42 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:37:42 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./PutChar.h"

PutChar::PutChar(void) {
    _symbol = '*';
}

PutChar::~PutChar() {}

void PutChar::action(char **array)
{
    std::cout << **array;
}

void PutChar::push_back(std::ifstream &file)
{
	file.close();
}
