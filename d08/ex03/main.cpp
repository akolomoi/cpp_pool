/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:39:27 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:39:28 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream> 
#include <fstream> 
#include <vector>
#include "./Symbol.h"
#include "./Decrement.h"
#include "./Increment.h"
#include "./GetChar.h"
#include "./PutChar.h"
#include "./LeftShift.h"
#include "./RightShift.h"
#include "./Cycle.h"



int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "Usage: ./mindopen [file]" << std::endl;
        return 0;
    }
    char *cpu = new char[30000];
    std::vector<Symbol *> acc;
    char ch;
    std::ifstream file;
    file.open(argv[1]);
    if (!file)
    {
        std::cout << "Bad input file." << std::endl;
        return 0;
    }
    while(file.get(ch))
    {
        switch (ch)
        {
            case 'r':
                acc.push_back(new RightShift());
                break;
            case 'l':
                acc.push_back(new LeftShift());
                break;
            case 'u':
                acc.push_back(new Increment());
                break;
            case 'd':
                acc.push_back(new Decrement());
                break;
            case '*':
                acc.push_back(new PutChar());
                break;
            case '_':
                acc.push_back(new GetChar());
                break;
            case '{':
                acc.push_back(new Cycle());
                acc.back()->push_back(file);
        }
    }
    file.close();
    for(int i = 0; i < static_cast<int>(acc.size()); i++)
        acc[i]->action(&cpu);
    std::cout << std::endl;
}
