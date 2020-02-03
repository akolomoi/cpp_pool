/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GetChar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:24:52 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:24:53 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_GETCHAR_H
# define EX03_GETCHAR_H

#include "./Symbol.h"

class GetChar: public Symbol
{
public:
    GetChar(void);
    ~GetChar(void);

    void action(char **array);
    void push_back(std::ifstream &file);
};


#endif //EX03_GETCHAR_H
