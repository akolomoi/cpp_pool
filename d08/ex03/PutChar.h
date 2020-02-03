/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PutChar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:37:48 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:37:48 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_PUTCHAR_H
# define EX03_PUTCHAR_H

# include "./Symbol.h"

class PutChar: public Symbol
{
public:
    PutChar(void);
    ~PutChar(void);

    void action(char **array);
    void push_back(std::ifstream &file);

};


#endif //EX03_PUTCHAR_H
