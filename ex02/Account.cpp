#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    checkAmount() = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = getNbAccounts();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
    _totalAmount += initial_deposit;
    _nbAccounts++;
}

Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";closed" << std::endl;
    _totalAmount -= checkAmount();
    _nbAccounts--;
}

int	Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit)
{
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
    std::cout << ";deposit:" << deposit;
    checkAmount() += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
    {
        checkAmount() -= withdrawal;
        _totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
}

int		Account::checkAmount(void) const
{
    return (checkAmount());
}

void	Account::displayStatus(void) const
{
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

Account::Account(void)
{
}