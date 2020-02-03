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
	//std::cout << "Default constructor called." << std::endl;
}

Fixed::Fixed(const int value) : _raw_value(value << this->getFractionalBits())
{
	//std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(float const value) : _raw_value((int)(roundf(value * (1 << this->getFractionalBits()))))
{
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _raw_value(fixed.getRawBits())
{
	//std::cout << "Copy constructor called." << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called." << std::endl;
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
	//std::cout << "Assignation operator called." << std::endl;
	this->_raw_value = rhs.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

bool	Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

Fixed		&Fixed::operator++()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

const Fixed	Fixed::operator++(int)
{
	return (++Fixed(*this));
}

Fixed		&Fixed::operator--()
{
	this->setRawBits(this->getRawBits() + 1);
	return (*this);
}

const Fixed	Fixed::operator--(int)
{
	return (--Fixed(*this));
}

std::ostream	&operator<<(std::ostream &o, const Fixed &fixed)
{
	o << fixed.toFloat();
	return (o);
}

const Fixed	&Fixed::min(const Fixed &f1, const Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

const Fixed	&Fixed::max(const Fixed &f1, const Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed		&Fixed::min(Fixed &f1, Fixed &f2)
{
	return (f1 < f2 ? f1 : f2);
}

Fixed		&Fixed::max(Fixed &f1, Fixed &f2)
{
	return (f1 > f2 ? f1 : f2);
}

Fixed	&Fixed::Add(std::stringstream &stream)
{
	char	buf;
	Fixed	*f1;
	Fixed	*f2 = new Fixed();

	f1 = &(Multiply(stream));
	while (1)
	{
		if (!(stream >> buf))
			break;
		if (buf != '-' && buf != '+')
		{
			stream.unget();
			delete (f2);
			return (*f1);
		}
		delete (f2);
		f2 = &(Multiply(stream));
		if (buf == '+')
			*f1 = *f1 + *f2;
		else
			*f1 = *f1 - *f2;
	}
	delete (f2);
	return (*f1);
}

Fixed	&Fixed::Multiply(std::stringstream &stream)
{
	char	buf;
	Fixed	*f1;
	Fixed	*f2 = new Fixed();

	f1 = &(Loop(stream));
	while (1)
	{
		if (!(stream >> buf))
			break;
		if (buf != '*' && buf != '/')
		{
			stream.unget();
			delete (f2);
			return (*f1);
		}
		delete (f2);
		*f2 = Loop(stream);
		if (buf == '/')
			*f1 = *f1 / *f2;
		else if (buf == '*')
			*f1 = *f1 * *f2;
	}
	delete (f2);
	return (*f1);
}

Fixed	&Fixed::Loop(std::stringstream &stream)
{
	char	buf;
	float	nbr;

	stream >> buf;
	if (buf == '(')
	{
		Fixed *f = new Fixed(Add(stream));
		stream >> buf;
		if (buf != ')')
			stream.unget();
		return (*f);
	}

	stream.unget();
	stream >> nbr;
	Fixed	*f1 = new Fixed(nbr);
	return (*f1);
}

Fixed	&Fixed::calculate(std::string expression)
{
	std::stringstream stream(expression);
	Fixed &f = Add(stream);
	return (f);
}

