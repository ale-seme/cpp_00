#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) : _amount(initial_deposit){
	_nbAccounts += 1;
	_totalAmount += initial_deposit;

	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	//function to display the timestamp;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;

}

void	Account::_displayTimestamp(){
	auto now = std::time(0);
	auto tm = std::localtime(&now);

	std::cout << "[" << 1900 + tm->tm_year
		<< std::setw(2) << std::setfill('0') <<  1 + tm->tm_mon
		<< std::setw(2) << std::setfill('0') << tm->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << tm->tm_hour
		<< std::setw(2) << std::setfill('0') << tm->tm_min
		<< std::setw(2) << std::setfill('0') << tm->tm_sec << "] ";
}

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
	
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits\
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
	//OR ALSO GOOD MAYBE
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals" << getNbWithdrawals() << std::endl;
}