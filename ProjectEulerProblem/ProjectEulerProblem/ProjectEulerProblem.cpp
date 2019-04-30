// ProjectEulerProblem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int sum = 0;
const int forMil = 4000000;		//for problem 2

void Problem1();
void Problem2();

int main()
{
	//std::cout << "Hello World!\n"; 


	//Problem1();
	Problem2();
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
	int term = 3;
	int num1 = 1;
	int num2 = 2;

	while (sum < forMil)
	{
		temp = num1 + num2;

		if (num1 % 2 == 0 && sum < forMil)
		{
			cout << num1 << endl;
			sum += num1;
			cout << " in term " << term << " sum+= num1  is " << sum << endl;

			if (sum > forMil)
			{
				sum = evenTemp;
				break;
			}
		}
		/*if(num2 % 2 == 0 && sum < forMil) 
		{
			cout << num2 << endl;
			sum += num2;
			cout << " in term " << term << " sum+= num2  is " << sum << endl;

			if (sum > forMil)
			{
				sum = evenTemp;
				break;
			}
		}
		*/
		term++;
		num1 = num2;
		num2 = temp;
		evenTemp = sum;
	}

	cout << sum << endl;
	cout << term;
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
