#ifndef ACCOUNT_H
#define ACCOUNT_H



class Account{


private:
    int amount = 0;

public:
    int getAmount() const;
    void setAmount(int value);
    void withdraw(int value);
    void deposit(int value);
};



#endif // ACCOUNT_H
