/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:34:59 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/14 18:35:00 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef D08_SPAN_HPP
# define D08_SPAN_HPP

# include <vector>

class Span
{
public:
	Span();
	Span(unsigned int n);
	Span(const Span &span);
	~Span();

	Span	&operator=(const Span &rhs);

	void	addNumber(int n);
	void	addRange(std::vector<int>::iterator	begin, std::vector<int>::iterator end);
	int		shortestSpan();
	int 	longestSpan();

private:
	unsigned int		_n;
	std::vector<int>	_vec;
};


#endif //D08_SPAN_HPP
