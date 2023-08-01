/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmichel- <tmichel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:21:33 by tmichel-          #+#    #+#             */
/*   Updated: 2023/07/22 12:35:49 by tmichel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits= 0;
int	Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp(){
	std::time_t timestamp = std::time(0);
	
	std::cout << std::setfill('0') << "[" << 1900 + std::localtime(&timestamp)->tm_year
				<< std::setw(2) << 1 + std::localtime(&timestamp)->tm_mon
				<< std::setw(2) << std::localtime(&timestamp)->tm_mday << "_"
				<< std::setw(2) << std::localtime(&timestamp)->tm_hour
				<< std::setw(2) << std::localtime(&timestamp)->tm_min
				<< std::setw(2) << std::localtime(&timestamp)->tm_sec << "] " << std::flush;
	}

Account::Account(int initial_deposit){
	this->_nbAccounts++;
	this->_accountIndex = Account::_nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
				<< this->_amount << ";created" << std::endl;
}

Account::~Account(){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
				<< this->_amount << ";closed" << std::endl;
}

int	Account::getNbAccounts(){
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(){
	return Account::_totalAmount;
}

int	Account::getNbDeposits(){
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(){
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" 
				<< getTotalAmount() << ";deposits:" 
				<< getNbDeposits() << ";withdrawals:" 
				<< getNbWithdrawals() << std::endl;
}

void    Account::makeDeposit(int deposit){
		_displayTimestamp();
		this->_nbDeposits++;
		this->_totalNbDeposits++;
		this->_totalAmount += deposit;
		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
					<< this->_amount << ";deposit:" << deposit 
					<< ";amount:" << this->_amount + deposit 
					<< ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	if (withdrawal > this->_amount){
		std::cout << "index:" << this->_accountIndex << ";p_amount:" 
					<< this->_amount << ";withdrawal:refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_totalAmount -= withdrawal;
	std::cout << "index:" << this->_accountIndex << ";p_amount:" 
				<< this->_amount << ";withdrawal:" << withdrawal 
				<< ";amount:" << this->_amount - withdrawal 
				<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int		Account::checkAmount() const{
	return this->_amount;
}

void	Account::displayStatus() const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" 
				<< this->_amount << ";deposits:" << this->_nbDeposits 
				<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}