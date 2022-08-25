/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/25 21:21:52 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <functional>

int  Account::_nbAccounts = 1;
int  Account::_totalAmount = 0;
int  Account::_totalNbDeposits = 0;
int  Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
     this->_accountIndex = Account::_nbAccounts - 1;
     this->_amount = initial_deposit;
     this->_totalAmount += this->_amount;
     _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
     std::cout << "amount:" << this->_amount << ";";
     std::cout << "created"<< "\n";
     Account::_nbAccounts++;
}

void Account::displayAccountsInfos(void)
{
     _displayTimestamp();
     std::cout << "accounts:"<< Account::_nbAccounts - 1 << ";";
     std::cout << "total:" << Account::_totalAmount << ";";
     std::cout << "deposits:" << Account::_totalNbDeposits << ";";
     std::cout << "withdrawals:" << Account::_totalNbWithdrawals;
     std::cout << "\n";
}

void Account::displayStatus(void) const
{
     _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
     std::cout << "amount:" << this->_amount << ";";
     std::cout << "deposits:" << this->_nbDeposits << ";";
     std::cout << "withdrawals:" << this->_nbWithdrawals;
     std::cout << "\n";
}

void Account::makeDeposit(int depoosit)
{
     _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
     if (depoosit > 0)
     {
          this->_nbDeposits++;
          std::cout << "p_amount:" << this->_amount << ";";
          std::cout << "deposit:" << depoosit << ";";
          this->_amount += depoosit;
          std::cout << "amount:" << this->_amount << ";";
          std::cout << "nb_deposits:" << this->_nbDeposits;
          this->_totalAmount += depoosit;
          Account::_totalNbDeposits++;
     }
     std::cout << "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
     _displayTimestamp();
     if (withdrawal > 0 && withdrawal < this->_amount)
     {
          this->_nbWithdrawals++;
          std::cout << "index:" << this->_accountIndex << ";";
          std::cout << "p_amount:" << this->_amount << ";";
          std::cout << "withdrawal:" << withdrawal << ";";
          this->_amount -= withdrawal;
          std::cout << "amount:" << this->_amount << ";";
          std::cout << "nb_withdrawals:" << this->_nbWithdrawals;
          this->_totalAmount -= withdrawal;
          Account::_totalNbWithdrawals++;
     }
     else
     {
          std::cout << "index:" << this->_accountIndex << ";";
          std::cout << "p_amount:" << this->_amount << ";";
          std::cout << "withdrawal:" << "refused";
          std::cout << "\n";
          return (false);
     }
     std::cout << "\n";
     return true;
}

Account::~Account(void)
{
     _displayTimestamp();
     std::cout << "index:" << this->_accountIndex << ";";
     std::cout << "amount:" << this->_amount << ";";
     std::cout << "closed";
     if (this->_accountIndex != 0)
          std::cout << "\n";    
}

void Account::_displayTimestamp(void)
{
     std::time_t result = std::time(nullptr);
     // std::cout << "[19920104_091532] ";     
     std::cout << "[" << result << "]";     
}

int Account::getNbAccounts(void) { return (Account::_nbAccounts);}

int Account::getTotalAmount(void) {return (Account::_totalAmount);}

int Account::getNbDeposits(void) { return (Account::_totalNbDeposits); }

int Account::getNbWithdrawals(void) { return (Account::_totalNbWithdrawals); }

int Account::checkAmount(void) const { return (Account::_totalAmount); }
