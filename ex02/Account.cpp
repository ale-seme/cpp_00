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
	_accountIndex = _nbAccounts - 1;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount 
	<< ";created" << std::endl;
}

Account::~Account( void ){
_displayTimestamp();
std::cout << "index:" << _accountIndex << ";amount:" << _amount 
<< ";closed;" <<std::endl;
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

void Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
	<< ";p_amount:" << _amount << ";deposit:" << deposit;
	_amount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits += 1;
	_totalAmount += deposit; //can the total amount be more than MAX INT
	//do something before to check for overflow;
	std::cout<<";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:" << _accountIndex <<";p_amount:" << _amount
	<< ";withdrawal:";
	if (_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	std::cout << withdrawal << ";amount" << _amount
	<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}
int	Account::checkAmount( void ) const{
	return (_amount);
}

void	Account::displayAccountsInfos( void ){
	
	_displayTimestamp();
	//OR ALSO GOOD MAYBE
	std::cout << "accounts:" << getNbAccounts() << ";"
	<< "total:" << getTotalAmount() << ";"
	<< "deposits:" << getNbDeposits() << ";"
	<< "withdrawals" << getNbWithdrawals() << std::endl;
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