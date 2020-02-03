/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Symbol.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:17:30 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:17:31 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Symbol.h"

Symbol::Symbol()
{}

Symbol::Symbol(const Symbol &s)
{
	*this = s;
}

Symbol::~Symbol() {}

Symbol& Symbol::operator=(Symbol const &obj)
{
	static_cast<void>(obj);
    return  *this;
}
