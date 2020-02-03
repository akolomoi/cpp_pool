/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RightShift.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:33:34 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:33:35 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_POINTERTORIGHT_H
#define EX03_POINTERTORIGHT_H


#include "Symbol.h"

class RightShift: public Symbol {
public:

    RightShift(void);
    ~RightShift();
    void action(char **array);
    void push_back(std::ifstream &file);

};


#endif //EX03_POINTERTORIGHT_H
