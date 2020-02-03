/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:34:54 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 18:34:55 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./span.hpp"

Span::Span() : _n(0)
{}

Span::Span(unsigned int n) : _n(n)
{}

Span::Span(const Span &span)
{
	*this = span;
}

Span::~Span()
{}

Span	&Span::operator=(const Span &rhs)
{
	this->_n = rhs._n;
	this->_vec = rhs._vec;
	return *this;
}

void	Span::addNumber(int n)
{
	if (this->_vec.size() < this->_n)
		this->_vec.push_back(n);
	else
		throw std::out_of_range("array of ints is full");
}

void	Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin > end)
		throw std::out_of_range("bad iterators");
	while (begin != end)
	{
		this->addNumber(*begin);
		begin++;
	}
}

int 	Span::shortestSpan()
{
	if (this->_vec.size() < 2)
		throw std::length_error("no ints to compare");

	std::sort(this->_vec.begin(), this->_vec.end());
	std::vector<int>::iterator tmp = this->_vec.begin();
	int	result = 0x7fffffff;
	for (;tmp < this->_vec.end() - 1; tmp++)
	{
		int val = *(tmp + 1) - *tmp;
		if (val < result)
			result = val;
	}
	return result;
}

int 	Span::longestSpan()
{
	if (this->_vec.size() < 2)
		throw std::length_error("no ints to compare");

	std::sort(this->_vec.begin(), this->_vec.end());
	return *(this->_vec.end() - 1) - *(this->_vec.begin());
}
