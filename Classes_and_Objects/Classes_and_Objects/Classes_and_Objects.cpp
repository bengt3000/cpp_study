// Classes_and_Objects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
using namespace std;

bool isPrime(int p) {
	// Highest supported prime is 2147483629
	if (p < 2)
		return false;
	if (p < 4)
		return true;
	if (p % 2 == 0 || p % 3 == 0)
		return false;
	int i = 5;
	while (i*i <= p)
	{
		if ((p%i == 0) || ((p % (i + 2))==0))
			return false;
		i += 6;
	}
	return true;
}

// prime class
class Prime {
private:
	int _p = 2;
public:
	Prime();		// defaul constructor
	Prime(int p);	// constructor with input
	~Prime();		// destructor
	void operator++();
	void operator--();
	int getValue();
	bool setValue( int p);
};

// -- implementation --
Prime::Prime() :_p(2) {};
Prime::Prime(int p){
	if (isPrime(p))
		_p = p;
	else
		delete this;
};
Prime::~Prime() {

};

int Prime::getValue() {
	return _p;
}

bool Prime::setValue(int p) {
	if (isPrime(p))
	{
		_p = p;
		return true;
	}
	else
		return false;
}

int main()
{
	int d;
	while (true)
	{
		cin >> d;
		//Prime myPrime = d;
		//cout << myPrime.getValue() << endl;
		if (isPrime(d))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
    return 0;
}

