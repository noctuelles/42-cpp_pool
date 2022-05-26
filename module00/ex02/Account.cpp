/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plouvel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 11:05:25 by plouvel           #+#    #+#             */
/*   Updated: 2022/05/26 11:06:02 by plouvel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout   << " accounts:" << getNbAccounts() << ";"
                << "total:" << getTotalAmount() << ";"
                << "deposits:" << getNbDeposits() << ";"
                << "withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts++),
                                        _amount(initial_deposit),
                                        _nbDeposits(0),
                                        _nbWithdrawals(0)
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "created" << std::endl;
    Account::_totalAmount += this->_amount;
}

Account::~Account()
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "closed" << std::endl;
}

void	Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    this->_amount += deposit;
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    std::cout   << " index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount - deposit << ";"
                << "deposit:" << deposit << ";"
                << "amount:" << this->_amount << ";"
                << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex << ";"
                << "p_amount:" << this->_amount << ";"
                << "withdrawal:";
    if (withdrawal > this->_amount)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout   << withdrawal << ";"
                << "amount:" << this->_amount << ";"
                << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount( void ) const
{
    return (this->_amount);
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout   << " index:" << this->_accountIndex << ";"
                << "amount:" << this->_amount << ";"
                << "deposits:" << this->_nbDeposits << ";"
                << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::time_t tm      = std::time(0);
    std::tm     *now    = std::localtime(&tm);

    std::cout << "[" << now->tm_year + 1900;
    if (now->tm_mon < 10) std::cout << "0";
    std::cout << now->tm_mon + 1;
    if (now->tm_mday < 10) std::cout << "0";
    std::cout << now->tm_mday << "_";
    if (now->tm_hour < 10) std::cout << "0";
    std::cout << now->tm_hour;
    if (now->tm_min < 10) std::cout << "0";
    std::cout << now->tm_min;
    if (now->tm_sec < 10) std::cout << "0";
    std::cout << now->tm_sec << "]";
}
