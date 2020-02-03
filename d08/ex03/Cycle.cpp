/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cycle.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:20:10 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:20:11 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Symbol.h"
#include "./Decrement.h"
#include "./Increment.h"
#include "./GetChar.h"
#include "./PutChar.h"
#include "./LeftShift.h"
#include "./RightShift.h"
#include "./Cycle.h"

#include <iostream>

Cycle::Cycle() {
    _symbol = '{';
    _end_symbol = '}';
}

Cycle::~Cycle() {}

void Cycle::action(char **array)
{
    int i = 0;
    while(1)
    {
        buf[i]->action(array);
        i++;
        if (i == static_cast<int>(buf.size()))
        {
            i = 0;
            if (!**array)
                break;
        }
    }
        
}

char Cycle::getEndSymbol() const
{
    return _end_symbol;
}

void Cycle::push_back(std::ifstream &file)
{
    char ch;
    while(file.get(ch))
    {
        switch (ch)
        {
            case 'r':
                buf.push_back(new RightShift());
                break;
            case 'l':
                buf.push_back(new LeftShift());
                break;
            case 'u':
                buf.push_back(new Increment());
                break;
            case 'd':
                buf.push_back(new Decrement());
                break;
            case '*':
                buf.push_back(new PutChar());
                break;
            case '_':
                buf.push_back(new GetChar());
                break;
            case '{':
                buf.push_back(new Cycle());
                buf.back()->push_back(file);
            case '}':
                return;
        }
    }
}
