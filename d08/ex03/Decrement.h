/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Decrement.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:28:08 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:28:08 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_ASCIIDOWN_H
# define EX03_ASCIIDOWN_H

# include "./Symbol.h"

class Decrement: public Symbol
{
public:
    Decrement(void);
    ~Decrement(void);

    void action(char **array);
    void push_back(std::ifstream &file);
};


#endif //EX03_ASCIIDOWN_H
