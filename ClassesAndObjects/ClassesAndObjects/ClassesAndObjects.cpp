// Classes_and_Objects.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include <cstdio>
#include <iostream>
#include "C:\Program Files (x86)\Microsoft Visual Studio 14.0\VC\include\stdio.h"
#include "Prime.h"
#include "Bank.h"
using namespace std;



int main()
{
	int d;
	while (true)
	{
		/*
		cin >> d;
		Prime myPrime = d;
		myPrime++;
		cout << myPrime.getValue() << endl;
		myPrime--;
		myPrime--;
		cout << myPrime.getValue() << endl;
		*/
		printf("Create bank");
		Bank AndersBank;
		puts("Create customer");
		Customer A = 'A';
		Customer B = 'B';
		puts("Create accounts for A and B");
		AndersBank.create_account(A, 142857);
		AndersBank.create_account(B, 314285);
		puts("Check balance for A");
		AndersBank.checkBalance(A);
		puts("Deposit more money for A");
		AndersBank.cashInOut(A, 100000000);
		puts("Try to cash out for B");
		AndersBank.cashInOut(B, -142857);
		getchar();



		
	}
	return 0;
}