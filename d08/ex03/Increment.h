/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Increment.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:31:41 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:31:43 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_ASCIIUP_H
# define EX03_ASCIIUP_H

# include "./Symbol.h"

class Increment: public Symbol
{
public:
    Increment(void);
    ~Increment(void);

    void action(char **array);
    void push_back(std::ifstream &file);

};


#endif //EX03_ASCIIUP_H
