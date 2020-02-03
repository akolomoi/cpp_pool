/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetChar.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:24:56 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:24:57 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./GetChar.h"

GetChar::GetChar()
{
    _symbol = '_';
}

GetChar::~GetChar()
{}

void GetChar::action(char **array)
{
    std::cin >> **array;
}

void GetChar::push_back(std::ifstream &file)
{
	file.close();
}
