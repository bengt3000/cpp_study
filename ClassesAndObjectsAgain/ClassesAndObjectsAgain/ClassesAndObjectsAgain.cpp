// ClassesAndObjectsAgain.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
#include <iostream>
#include <stdio.h>
#include "Prime.h"
#include "Bank.h"
#include "Vector2d.h"
#include "Calorie.h"

using namespace std;



int main()
{
	int d;
	while (true)
	{
		cout << "Input a prime number" << endl;
		cin >> d;
		Prime myPrime = d;
		if (d == myPrime.getValue())
		{
			printf("%d is a prime!\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime++ = ");
			myPrime++;
			printf("%d\n", myPrime.getValue());
			printf("myPrime-- = ");
			myPrime--;
			printf("%d\n", myPrime.getValue());
			printf("myPrime-- = ");
			myPrime--;
			printf("%d\n\n", myPrime.getValue());
		}
		else
			printf("%d is not a prime \n", d);
		
	
		/*	printf("Create bank");
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
		d = AndersBank.cashInOut(B, -142857);
		printf("%d dollares withdrawn", d);
		getchar();



		*/



	}
	return 0;
}

