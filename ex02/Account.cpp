#include "Account.hpp"
#include <iostream>


int Account::getNbAccounts( void ){
	return	_nbAccounts;
}

int Account::getTotalAmount( void ){
	return _totalAmount;
}

int Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals" << getNbWithdrawals() << std::endl;
}