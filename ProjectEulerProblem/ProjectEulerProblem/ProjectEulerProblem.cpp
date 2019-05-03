// ProjectEulerProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int sum = 0;
const int forMil = 4000000;		//for problem 2

void Problem1();
void Problem2();
void Problem3();
void Problem4();

int main()
{
	//std::cout << "Hello World!\n"; 


	//Problem1();
	//Problem2();
	//Problem3();
	Problem4();
}

void Problem1()
{
	sum = 0;

	for (int i = 0; i < 1000; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5 == 0))
		{
			sum += i;
		}
	}

	cout << sum;
}

void Problem2()
{
	sum = 0;
	int temp = 0;
	int evenTemp = 0;
	int term = 1;
	int num1 = 1;
	int num2 = 1;

	int termcount = 0;

	while (num1 < forMil)
	{
		temp = num1 + num2;

		if (num1 % 2 == 0 && num1 < forMil)
		{
			cout <<"Num1 is " << num1 << endl;
			sum += num1;
			cout << " in term " << term << " sum+= num1  is " << sum << endl;

			if (num1 > forMil)
			{
				sum = evenTemp;
				break;
			}
		}

		term++;
		num1 = num2;
		num2 = temp;
		evenTemp = sum;
	}

	cout <<"Sum is "<< sum << endl;
	cout <<"The term is "<< term;
}


void Problem3()
{
	sum = 0;
	bool problemNotSolved = true;
	vector <int> primesFactors;
	//int vectorIndex = 1;

	long divisor = 2;
	long long numToGetPrime = 0;

	cout << "Enter a number to get it's prime factor\n";
	cin >> numToGetPrime;

	cout << "Number entered is " << numToGetPrime << endl;

	while (problemNotSolved)
	{

		for (int divisor = 2; divisor <= numToGetPrime; divisor++)
		{
			if (divisor == numToGetPrime)
			{
				primesFactors.push_back(divisor);
				//cout << divisor << endl;
				problemNotSolved = false;
				break;
			}
			else if (numToGetPrime % divisor == 0)
			{
				/*
				if number divived by the divisor is a whole number, its one of its
				factors and it will be added to the vector then make the new numToGetPrime
				be the answer of divied numbers
				*/
				numToGetPrime = numToGetPrime / divisor;
				//cout << divisor << endl;
				primesFactors.push_back(divisor);
			}
		}
	}

	cout << "The list is of prime factors is\n";

	for (auto i = primesFactors.begin(); i != primesFactors.end(); ++i)
	{
		cout << *i << endl;
	}
	
}

void Problem4()
{
	sum = 0;

	int digitSize = 0;
	int currentPalindrome = 0;
	int pastPalindrome = 0;

	int loopCondition = 9;

	cout << "Select the size of the digit of the palindromic number you want to solve for\n";
	cin >> digitSize;
	cout << "Size selected " << digitSize << endl;

	if (digitSize > 1) 
	{
		loopCondition = pow(10, digitSize);
		cout << loopCondition;
	}

	for()



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
