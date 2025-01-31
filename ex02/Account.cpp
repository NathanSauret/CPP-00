#include "Account.hpp"
#include <iostream>

// Account's constructor
Account::Account(int initial_deposit)
{
	std::cout << "Account's constructor called" << std::endl;
	this->_amount = initial_deposit;
	return;
}

// Account's destructor
Account::~Account(void)
{
	std::cout << "Account's destructor called" << std::endl;
	return;
}

// Account's member function to get the variable _nbAccounts
// int	Account::getNbAccounts(void)
// {
// 	return (Account::_nbAccounts);
// }

void	Account::displayAccountsInfos( void )
{
	std::cout <<
}