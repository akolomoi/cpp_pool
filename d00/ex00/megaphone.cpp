/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:05:28 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/02 18:05:31 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

static void		capitalize(std::string str)
{
	size_t		i;
	size_t		str_size;

	i = 0;
	str_size = str.length();
	while (i < str_size)
		std::putchar(std::toupper(str[i++]));
}

int			main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc > 1)
		while (i < argc)
		{
			capitalize(argv[i]);
			i++;
		}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
