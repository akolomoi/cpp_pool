/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akolomoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 13:55:46 by akolomoi          #+#    #+#             */
/*   Updated: 2019/12/03 13:55:47 by akolomoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "./Account.class.hpp"

int		Account::_nbAccounts = 0;
int		Account::_totalNbWithdrawals = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalAmount = 0;

Account::Account() : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts++;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::Account(int initial_deposit) : _amount(initial_deposit),
_nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount
	<< ";closed" << std::endl;
	Account::_nbAccounts -= 1;
}

int		Account::getNbAccounts()
{
	return (Account::_nbAccounts);
}

int		Account::getNbWithdrawals()
{
	return (Account::_totalNbWithdrawals);
}

int		Account::getNbDeposits()
{
	return (Account::_totalNbDeposits);
}

int		Account::getTotalAmount()
{
	return (Account::_totalAmount);
}

int		Account::checkAmount() const
{
	return (1);
}

void	Account::_displayTimestamp()
{
	time_t		t;
	struct tm	*data;

	time(&t);
	data = gmtime(&t);
	std::cout << "[" << std::setw(2) << std::setfill('0') << data->tm_year + 1900
	<< std::setw(2) << std::setfill('0') << data->tm_mon + 1
	<< std::setw(2) << std::setfill('0') << data->tm_mday << "_"
	<< std::setw(2) << std::setfill('0') << data->tm_hour + 2
	<< std::setw(2) << std::setfill('0') << data->tm_min
	<< std::setw(2) << std::setfill('0') << data->tm_sec << "] ";
}

void	Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
	<< this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"
	<< this->_nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
	<< this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount
	<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

void	Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
	<< this->_amount << ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos()
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:"
	<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
