/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:59:32 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/05 18:59:33 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# define FRACTIONAL_BITS	8

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed	&operator=(Fixed const &rhs);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:
	int 				_raw_value;
	static const int	_fractional;
};

#endif
