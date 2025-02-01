#include "Account.hpp"
#include <iostream>
#include <ctime>

// Define and initialize static member variables
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;





// Return the number of accounts
int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

// Return the total amount
int	Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

// Return the number of deposits
int	Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

// Return the number of withdrawals
int	Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

// Display the accounts informations
void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts() << ";";
	std::cout << "total:" << Account::getTotalAmount() << ";";
	std::cout << "deposits:" << Account::getNbDeposits() << ";";
	std::cout << "withdrawals:" << Account::getNbWithdrawals() << std::endl;
}





// Calling Account's constructor
Account::Account(int initial_deposit)
{
	Account::_accountIndex = _nbAccounts;
	Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;

	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "created" << std::endl;
}

// Calling Account's destructor
Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex << ";";
	std::cout << "amount:" << Account::_amount << ";";
	std::cout << "closed" << std::endl;
}





// Make a deposit
void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	Account::_totalAmount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

// Make a withdrawal
bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (0);
	}
	std::cout << "withdrawal:" << withdrawal << ";";

	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;

	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbDeposits << std::endl;
	return (1);
}

// Display the status of an account
void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}





// Display the timestamp
void	Account::_displayTimestamp( void )
{
	char timestamp[20];
	std::time_t time;

	std::time(&time);
	std::strftime(timestamp, sizeof(timestamp) , "%Y%m%d_%H%M%S", std::localtime(&time));
	std::cout << "[" << timestamp << "] ";
}