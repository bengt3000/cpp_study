// Classes_and_Objects.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
using namespace std;

bool isPrime(int p) {
	for (int i = 2; i <= (p / 2); i++)
	{
		cout << i << endl;
		if (0 == (p % i))
			return false;
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
		Prime myPrime = d;
		cout << myPrime.getValue() << endl;
		if (isPrime(d))
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
    return 0;
}

