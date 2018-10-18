#pragma once

// Functions
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
		if ((p%i == 0) || ((p % (i + 2)) == 0))
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
	// Member functions:
	int getValue();
	bool setValue(int p);

	Prime & operator++ () {
		if (_p == 2)
		{
			_p = 3;
			return *this;
		}
		int i = 2;
		while (!isPrime(_p + i))
			i += 2;
		_p += i;
		return *this;
	}
	Prime operator++ (int) {
		if (_p == 2)
		{
			_p = 3;
			return *this;
		}

		int i = 2;
		while (!isPrime(_p + i))
			i += 2;
		_p += i;
		return *this;
	}

	Prime & operator-- () {
		if (_p == 2)
			return *this;
		if (_p == 3)
		{
			_p = 2;
			return *this;
		}
		int i = -2;
		while (!isPrime(_p - i))
			i -= 2;
		_p += i;
		return *this;
	}
	Prime operator-- (int) {
		if (_p == 2)
			return *this;
		if (_p == 3)
		{
			_p = 2;
			return *this;
		}

		int i = -2;
		while (!isPrime(_p - i))
			i -= 2;
		_p += i;
		return *this;
	}
};

// -- Constructors --
Prime::Prime() :_p(2) {};
Prime::Prime(int p) {
	if (isPrime(p))
		_p = p;
	else
		_p = 2;
};
Prime::~Prime() {

};

// member functions
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
