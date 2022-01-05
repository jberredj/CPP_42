/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jberredj <jberredj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:09:25 by jberredj          #+#    #+#             */
/*   Updated: 2022/01/05 16:49:11 by jberredj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <chrono>
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
	
}

void	Account::_displayTimestamp( void )
{
	std::chrono::system_clock::time_point 	sec_since_epoch;
	std::time_t								now;
	tm										now_utc;

	sec_since_epoch = std::chrono::system_clock::now();
	now = std::chrono::system_clock::to_time_t(sec_since_epoch);
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

void	Account::displayTimestamp( void )
{
	Account::_displayTimestamp();
}

/*
** member class functions
*/

void	Account::makeDeposit( int deposit )
{

}

bool	Account::makeWithdrawal( int withdrawal )
{

}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{

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
