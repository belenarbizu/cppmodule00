#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    Account::_displayTimestamp();
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_accountIndex = getNbAccounts();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";created" << std::endl;
    _totalAmount += initial_deposit;
    _nbAccounts++;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
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
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void	Account::makeDeposit(int deposit)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount();
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << ";amount:" << checkAmount() << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << checkAmount() << ";withdrawal:";
    if (withdrawal > checkAmount())
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    else
    {
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << withdrawal << ";amount:" << checkAmount() << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    }
    return (true);
}

int		Account::checkAmount(void) const
{
    return (this->_amount);
}

void	Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void)
{
    time_t  now;
    tm      *ltm;

    now = time(0);
    ltm = localtime(&now);
    std::cout << "[" << 1900 + ltm->tm_year;
    if (1 + ltm->tm_mon < 10)
        std::cout << "0" << 1 + ltm->tm_mon;
    else
        std::cout << 1 + ltm->tm_mon;
    if (ltm->tm_mday < 10)
        std::cout << "0" << ltm->tm_mday;
    else
        std::cout << ltm->tm_mday;
    std::cout << "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

Account::Account(void)
{
}
