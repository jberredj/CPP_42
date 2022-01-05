/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:09:25 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 17:44:56 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Account.hpp"

/*
** non member attributes
*/

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*
** non member class functions
*/

int	Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" << Account::_totalNbWithdrawals << ";";
	std::cout << std::endl;
}

void	Account::_displayTimestamp( void )
{
	std::time_t								now;
	tm										now_utc;

	now = std::time(NULL);
	now_utc = *localtime(&now);
	std::cout << std::setfill('0')
		<< "[" 
		<<std::setw(2) << now_utc.tm_year + 1900
		<<std::setw(2) << now_utc.tm_mon + 1
		<<std::setw(2) << now_utc.tm_mday
		<< "_"
		<<std::setw(2) << now_utc.tm_hour
		<<std::setw(2) << now_utc.tm_min
		<<std::setw(2) << now_utc.tm_sec
		<< "] ";
}

/*
** member class functions
*/

void	Account::makeDeposit( int deposit )
{
	int	old_amount;

	Account::_displayTimestamp();
	old_amount = this->_amount;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amout" << old_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
}

int		Account::checkAmount( void ) const
{
	
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;
}


/*
** Constructors and destructor
*/
Account::Account( void )
{
	
}

Account::Account( int initial_deposit )
{
	
}

Account::~Account( void )
{

}
