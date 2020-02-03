/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 17:56:41 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 17:56:42 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BRAIN_H
# define BRAIN_H

# include <sstream>

class Brain
{
public:
	Brain();
	~Brain();

	std::string	identify();
};

#endif
