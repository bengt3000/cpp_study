// UsingFunctionsAndPointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <string>
#include <iostream>
#include <bitset>  
#include <cmath>
using namespace std;

void alex()	// Write a function that determines whether or not a string is a palindrome (spaces and delimiters excluded).
{
	string input;
	string trimmed_input;
	
	cout << "Alexander's function \nInput a string to see if it's a palindrome:" << endl;
	getline(cin,input);
	
	for (char c : input) if (!isspace(c)) trimmed_input += c;

	string::reverse_iterator rit = trimmed_input.rbegin();
	string::iterator it;
	for (it = trimmed_input.begin(); it < trimmed_input.end(); ++it)
	{	
		if (*it != *rit)
			break;
		++rit;
	}
	if (it == trimmed_input.end() && rit == trimmed_input.rend())
		cout << input + " is a palindrome!" << endl;
	else
		cout << input + " is not palindrome." << endl;
}



double binary2double(string s)
{
	int i = 0;
	double d = 0;
	double multiplier = 2;
	string::reverse_iterator rit = s.rbegin();
	for (rit = s.rbegin(); rit < s.rend(); ++rit)
	{
		if (*rit != '0' && *rit != '1')
		{
			multiplier = 10;
			break;
		}
	}
	for (rit = s.rbegin(); rit < s.rend(); ++rit)
	{
		d += ((int) *rit -48)*(pow(multiplier,i));
		i++;
	}
	return d;
}

double jeanette(string s1, string s2)
{
	return binary2double(s1) + binary2double(s2);
}

int wenbo(int max_i)
{
	int output = 0;
	if (max_i > 2018)
		cout << "Only input values up to 2018 are supported." << endl;
	else
	{
		for (int i = 1; i <= max_i; i++)
		{
			if ((i % 2) != 0)
				output += i;
		}
	}
	return output;
}


void anders(int a) // pass by value
{
	a = a * a;
}
void anders(int &a, int &b) // pass by reference
{
	a = a * a;
}
void anders(int * a) // pass by pointer
{
	*a = (*a) * (*a);
}





int main()
{
	string s1, s2;
	double d;
	int wenboInt;
	int andersInt;
	int* andersPtr = &andersInt;

	alex();


	cout << "Jeanettes' function \nenter first number" << endl;
	cin >> s1;
	cout << "enter second number" << endl;
	cin >> s2;
	d = jeanette(s1, s2);
	cout << d << endl;


	cout << "Wenbo's function\nEnter a number <= 2018" << endl;
	cin >> wenboInt;
	wenboInt = wenbo(wenboInt);
	cout << "The sum is " + to_string(wenboInt) << endl;


	cout << "Anders' function\nEnter an integer" << endl;
	cin >> andersInt;
	anders(andersInt);
	cout << "Result when passing as value " + to_string(andersInt) << endl;
	anders(andersInt, andersInt);
	cout << "Result when passing as reference " + to_string(andersInt) << endl;
	anders(andersPtr);
	cout << "Result when passing as pointer " + to_string(andersInt) << endl;


    return 0;
}

