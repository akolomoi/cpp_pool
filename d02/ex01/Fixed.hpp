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

# include <cmath>
# define FRACTIONAL_BITS	8

class Fixed
{
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &fixed);
	~Fixed();

	Fixed	&operator=(Fixed const &rhs);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits( void ) const;
	int		getFractionalBits() const;
	void	setRawBits( int const raw );

private:
	int 				_raw_value;
	static const int	_fractional;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);

#endif
