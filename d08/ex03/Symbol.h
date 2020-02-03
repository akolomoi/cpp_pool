/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Symbol.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 21:17:35 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 21:17:35 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_SYMBOL_H
# define EX03_SYMBOL_H

# include <fstream>

class Symbol
{
public:
    Symbol();
    virtual ~Symbol();

    virtual void action(char **array) = 0;
    void setSymbol(char symbol);
    char getSymbol() const;
    virtual void push_back(std::ifstream &file) = 0;

protected:
	Symbol(const Symbol &s);

	char _symbol;

	Symbol &operator=(Symbol const & obj);
};



#endif //EX03_SYMBOL_H
