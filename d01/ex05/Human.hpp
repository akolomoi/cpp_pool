/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:57:20 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:57:21 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H
# define HUMAN_H

# include "./Brain.hpp"

class Human
{
public:
	Human();
	~Human();

	std::string	identify();
	Brain		&getBrain();

private:
	Brain	_brain;
};

#endif
