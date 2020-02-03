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

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
	std::cout << "Copy constructor called." << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called." << std::endl;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called." << std::endl;
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
