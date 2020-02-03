/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:26:56 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 21:26:57 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <string>
#include <iomanip>
#include <iostream>
#include <ctime>
#include <sstream>
#include <fstream>

class Logger
{
public:
	Logger(std::string name);
	~Logger();

	void log(std::string const & dest, std::string const & message);

private:
	std::string _name;

	std::string	displayTimeStamp();
	void		logToConsole(std::string str);
	void		logToFile(std::string str);
	std::string	makeLogEntry(std::string str);
};

#endif
