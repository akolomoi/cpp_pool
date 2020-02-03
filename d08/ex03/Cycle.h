/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cycle.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:20:15 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:20:16 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CYCLE_H
#define EX03_CYCLE_H

#include "./Symbol.h"
#include <vector>
#include <fstream>

class Cycle: public Symbol
{
public:
    Cycle();
    ~Cycle();

    void push_back(std::ifstream &file);

    char getEndSymbol(void) const;

    void action(char **array);

private:
	char _end_symbol;
	std::vector<Symbol *> buf;
};


#endif //EX03_CYCLE_H
