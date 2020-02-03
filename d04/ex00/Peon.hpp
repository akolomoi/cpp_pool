/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:42:23 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/07 17:42:26 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_H
# define PEON_H

# include <string>
# include <iostream>
# include "./Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(const Peon &clone);
	~Peon();

	Peon		&operator=(const Peon &rhs);

	void		getPolymorphed() const;

private:
	Peon();
};

#endif
