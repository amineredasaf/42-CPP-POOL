/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsaf <rsaf@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 15:09:45 by rsaf              #+#    #+#             */
/*   Updated: 2022/08/21 18:03:14 by rsaf             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(int initial_deposit)
{
     std::cout<< "constructor" << initial_deposit << "\n";
}

Account::~Account(void)
{
     std::cout << "destructor"<< "\n";
}

int Account::getNbAccounts(void)
{
     std::cout << "getTotalAmount"<< "\n";
     return 1;;
}

int Account::getTotalAmount(void)
{
     std::cout << "getTotalAmount"<< "\n";
     return 1;;

}

int Account::getNbDeposits(void)
{
     std::cout << "getNbDeposits"<< "\n";
     return 1;;

}

int Account::getNbWithdrawals(void)
{
     std::cout << "getNbWithdrawals"<< "\n";
     return 1;
}

void Account::displayAccountsInfos(void)
{
     std::cout << "getNbWithdrawals"<< "\n";
}

void Account::makeDeposit(int depoosit)
{
     std::cout << "makeDeposit"<< "\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
     std::cout << "makeWithdrawal"<< "\n";
     return true;
}

int Account::checkAmount(void) const
{
     std::cout << "checkAmount"<< "\n";
     return 1;

}

void Account::displayStatus(void) const
{
     std::cout << "displayStatus"<< "\n";
}