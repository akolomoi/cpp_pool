/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LeftShift.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:36:25 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:36:26 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_POINTERTOLEFT_H
#define EX03_POINTERTOLEFT_H

#include "./Symbol.h"

class LeftShift: public Symbol
{
public:
    LeftShift(void);
    ~LeftShift(void);

    void action(char **array);
    void push_back(std::ifstream &file);

};


#endif //EX03_POINTERTOLEFT_H
