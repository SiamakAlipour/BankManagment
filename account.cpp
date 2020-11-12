#include "account.h"

int Account::getAmount() const
{
    return amount;
}

void Account::setAmount(int value)
{
    amount = value;
}

void Account::withdraw(int value)
{
    amount = amount - value;
}

void Account::deposit(int value)
{
    amount = amount + value;
}
