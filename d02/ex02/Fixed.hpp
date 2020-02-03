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

	Fixed		&operator=(Fixed const &rhs);
	Fixed		operator+(Fixed const &rhs) const;
	Fixed		operator-(Fixed const &rhs) const;
	Fixed		operator*(Fixed const &rhs) const;
	Fixed		operator/(Fixed const &rhs) const;
	bool		operator==(const Fixed &rhs) const;
	bool		operator>(const Fixed &rhs) const;
	bool		operator<(const Fixed &rhs) const;
	bool		operator>=(const Fixed &rhs) const;
	bool		operator<=(const Fixed &rhs) const;
	bool		operator!=(const Fixed &rhs) const;
	Fixed		&operator++(void);
	const Fixed	operator++(int);
	Fixed		&operator--(void);
	const Fixed	operator--(int);

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits( void ) const;
	int		getFractionalBits() const;
	void	setRawBits( int const raw );

	static const Fixed	&min(const Fixed &f1, const Fixed &f2);
	static const Fixed	&max(const Fixed &f1, const Fixed &f2);
	static Fixed		&min(Fixed &f1, Fixed &f2);
	static Fixed		&max(Fixed &f1, Fixed &f2);

private:
	int 				_raw_value;
	static const int	_fractional;
};

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed);

#endif
