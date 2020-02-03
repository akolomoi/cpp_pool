/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:27:59 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 21:27:59 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Logger.hpp"

int 	main()
{
	Logger logger("output");

	logger.log("logToConsole", "abcdefg");
	logger.log("logToFile", "hijklmnop");
	logger.log("logToFile", "another line");
	logger.log("logToConsole", "new_line");
	logger.log("logToConsole", "xyz");
	logger.log("logToFile", "third line");
	return (0);
}
