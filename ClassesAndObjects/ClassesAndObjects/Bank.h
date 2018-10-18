#pragma once


#include <cstdio>
#include <iostream>
#include <string.h>
#include <exception>

// Error class ################################################
class E : public std::exception {
	const char * msg = nullptr;
	E() {};
public:
	E(const char * s) throw() : msg(s) {}
	const char * what() const throw() { return msg; }
};

// Customer class ################################################
class Customer
{
private:
	char _name;
	int _accountnumber;
public:
	Customer();
	Customer(char name);
	~Customer();
	char getName() { return _name; };
	void setNumber(int i) { _accountnumber = i; printf("account # %d for %c \n", _accountnumber, _name); };
	int getNumber(void) { return _accountnumber; };
};

// constructors
Customer::Customer() : _name('?') {};
Customer::Customer(char name) : _name(name) {
	printf("Customer name %c \n",name);
};
Customer::~Customer() {};

// Account class ################################################
class Account
{
private:
	int _balance;
	Customer _customer;
public:
	Account();
	Account(Customer customer, int balance);
	~Account();
	void setBalance(int i) { _balance += i; };
	int getBalance() { return _balance; };
};

// constructors
Account::Account(){};
Account::Account(Customer customer, int balance) : _customer(customer), _balance(balance) {
	puts("account opened" );
};
Account::~Account() {};

// Bank class ################################################
class Bank
{
private:
	int _nacounts;
	int _ncustomers;
	int _totalBalance;
	Account _accounts[10];
	Customer _customers[10];
public:
	Bank();		// defaul constructor
	~Bank();		// destructor
	// Member functions:
	void create_account(Customer &customer, int balance);
	int cashInOut(Customer &customer, int cash);
	int checkBalance(Customer &customer);

};

// constructors
Bank::Bank() : _nacounts(0), _ncustomers(0), _totalBalance(0) {
	puts("Bank created");
};
Bank::~Bank(){};

void Bank::create_account(Customer &customer, int balance) 
{
	_accounts[_nacounts] = Account(customer, balance);
	customer.setNumber(_nacounts);
	_nacounts++;
	_ncustomers++;
	_totalBalance += balance;
};

int Bank::cashInOut(Customer &customer, int cash)
{
	try {
		int currentBalance = _accounts[customer.getNumber()].getBalance();
		if ((currentBalance + cash) < 0)
		{
			puts("Withdraw not possible");
			return 0;
		}
		_accounts[customer.getNumber()].setBalance(cash);
		printf("current balance is %d \n", (currentBalance + cash));
	}
	catch (std::exception & e) {
		printf("This customer have no account");
	}
}

int Bank::checkBalance(Customer &customer)
{
	int currentBalance = _accounts[customer.getNumber()].getBalance();
	printf("Current balance is %d \n", currentBalance);
	return currentBalance;
}