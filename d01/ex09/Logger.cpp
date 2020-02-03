/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:27:34 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/04 21:27:35 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Logger.hpp"

Logger::Logger(std::string name) : _name(name)
{}

Logger::~Logger()
{}

void		Logger::log(std::string const &dest, std::string const &message)
{
	std::string	mode[] = {"logToConsole", "logToFile"};
	void (Logger::*log_to[2])(std::string) = {
			&Logger::logToConsole, &Logger::logToFile
	};

	int i = -1;
	while (++i < 2)
		if (dest == mode[i])
			(this->*(log_to[i]))(message);
}

void		Logger::logToFile(std::string str)
{
	std::ofstream	out(this->_name, std::ios_base::app);

	if (errno)
	{
		std::cout << "Error: " << std::strerror(errno) << std::endl;
	}
	out << makeLogEntry(str);
}

void		Logger::logToConsole(std::string str)
{
	std::cout << makeLogEntry(str);
}

std::string	Logger::makeLogEntry(std::string str)
{
	std::stringstream buf;

	buf << displayTimeStamp() << str << std::endl;
	return (buf.str());
}

std::string	Logger::displayTimeStamp()
{
	std::stringstream	buf;
	time_t          	t;
	struct tm      		*data;

	time(&t);
	data = gmtime(&t);
	buf << "[" << std::setw(2) << std::setfill('0') << data->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << data->tm_mon + 1
	<< std::setw(2) << std::setfill('0') << data->tm_mday << "_"
	<< std::setw(2) << std::setfill('0') << data->tm_hour + 2
	<< std::setw(2) << std::setfill('0') << data->tm_min
	<< std::setw(2) << std::setfill('0') << data->tm_sec << "] ";
	return (buf.str());
}
