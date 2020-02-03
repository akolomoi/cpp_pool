/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LeftShift.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:36:32 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:36:33 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./LeftShift.h"

LeftShift::LeftShift(void)
{
    _symbol = 'l';
}

LeftShift::~LeftShift() {}

void LeftShift::action(char **array)
{
    (*array)--;
}

void LeftShift::push_back(std::ifstream &file)
{
	file.close();
}
