/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 13:59:47 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/13 13:59:50 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &val1, T &val2)
{
	T	tmp;
	tmp = val1;
	val1 = val2;
	val2 = tmp;
}

template <typename T>
const T		&min(const T &a, const T &b)
{
	return (a >= b ? b : a);
}

template <typename T>
const T		&max(const T &a, const T &b)
{
	return (a <= b ? b : a);
}

int 	main()
{
	int		a = 3, b = 6;
	float	c = 3.45, d = 6.78;
	char	e = '3', f = '6';

	std::cout << "(int)   max(" << a << ", " << b << ") = " << max<int>(a, b)	<< std::endl;
	std::cout << "(int)   min(" << a << ", " << b << ") = " << min<int>(a, b)	<< std::endl;
	std::cout << "(float) max(" << c << ", " << d << ") = " << max<float>(c, d)	<< std::endl;
	std::cout << "(float) min(" << c << ", " << d << ") = " << min<float>(c, d)	<< std::endl;
	std::cout << "(char)  max(" << e << ", " << f << ") = " << max<char>(e, f)	<< std::endl;
	std::cout << "(char)  min(" << e << ", " << f << ") = " << min<char>(e, f)	<< std::endl;


	std::cout << "(int)   swap(" << a << ", " << b << ")";
	swap<int>(a,b);
	std::cout << " => (" << a << ", " << b << ")" << std::endl;
	std::cout << "(float) swap(" << c << ", " << d << ")";
	swap<float>(c,d);
	std::cout << " => (" << c << ", " << d << ")" << std::endl;
	std::cout << "(char)  swap(" << e << ", " << f << ")";
	swap<char>(e,f);
	std::cout << " => (" << e << ", " << f << ")" << std::endl;

	std::cout << std::endl << "(d07::subject::ex00::main)" << std::endl;
	a = 2;
	b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string h = "chaine1";
	std::string i = "chaine2";
	::swap(h, i);
	std::cout << "i = " << h << ", h = " << i << std::endl;
	std::cout << "min( h, i ) = " << ::min( h, i ) << std::endl;
	std::cout << "max( h, i ) = " << ::max( h, i ) << std::endl;
	return 0;
}
