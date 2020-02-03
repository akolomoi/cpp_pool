/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RightShift.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:33:27 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:33:28 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./RightShift.h"


RightShift::RightShift()
{
    _symbol = 'r';
}

RightShift::~RightShift() {}

void RightShift::action(char **array)
{
    (*array)++;
}

void RightShift::push_back(std::ifstream &file)
{
	file.close();
}
