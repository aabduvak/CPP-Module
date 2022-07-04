/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabduvak <aabduvak@42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 17:38:02 by aabduvak          #+#    #+#             */
/*   Updated: 2022/07/05 00:41:41 by aabduvak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <chrono>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}

int Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}

int Account::getTotalAmount()
{
    return (Account::_totalAmount);
}

void Account::_displayTimestamp(void)
{
    std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
    std::time_t time_now = std::chrono::system_clock::to_time_t(now);
    
    tm utc_tm = *localtime(&time_now);
    std::cout << std::setfill('0') << "[" << (utc_tm.tm_year + 1900)
        << std::setw(2) << utc_tm.tm_mon
        << std::setw(2) << utc_tm.tm_mday << "_"
        << std::setw(2) << utc_tm.tm_hour
        << std::setw(2) << utc_tm.tm_min
        << std::setw(2) << utc_tm.tm_sec << "] ";
    // std::cout << "[19920104_091532] "
    // std::setfill('0') = 9 -> 09
}

Account::Account(int initial_deposit)
{
    // Initialize data
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    
    Account::_totalAmount += initial_deposit;
    
    // Print data
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "created" << std::endl;
}

Account::Account()
{
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
        
    // Print data
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:0" << ";";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    Account::_nbAccounts--;
    Account::_totalAmount -= this->_amount;
    
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "closed" << std::endl;
}

int Account::checkAmount(void) const
{
    return (this->_amount > 0);    
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    std::cout << "amount:" << this->_amount << ";";
    std::cout << "deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" <<  this->_amount << ";";
    if (this->_amount < withdrawal)
    {
        std::cout << "withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        std::cout << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        std::cout << "amount:" << this->_amount << ";";
        
        this->_nbWithdrawals++;
        std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals++;
    }
    return (true);
}