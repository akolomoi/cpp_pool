/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:59:12 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/05 18:59:14 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./Fixed.hpp"

const int Fixed::_fractional = FRACTIONAL_BITS;

Fixed::Fixed() : _raw_value(0)
{
	std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int value) : _raw_value(value << this->getFractionalBits())
{
	std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(float const value) : _raw_value((int)(roundf(value * (1 << this->getFractionalBits()))))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _raw_value(fixed.getRawBits())
{
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

float	Fixed::toFloat() const
{
	return ((float)this->getRawBits() / (float)(1 << this->getFractionalBits()));
}

int		Fixed::toInt() const
{
	return (this->getRawBits() >> this->getFractionalBits());
}

int 	Fixed::getFractionalBits() const
{
	return (Fixed::_fractional);
}

int		Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called." << std::endl;
	return (this->_raw_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_value = raw;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_raw_value = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}
