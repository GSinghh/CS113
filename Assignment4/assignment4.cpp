/*
	Assignment #4 
	Written by: Gurpreet Singh
	Comp Sci 113
	Professor Malik
*/

#include <iostream>
#include <string>

using namespace std;

/* Created functions for each of the problems */

void problemOne(int array[], int);
void problemTwo(int array[], int);
void problemThree(int array[], int);
void problemFour(int array[], int);
void problemFive(int array[], int);

int main()
{
	/* 
	Created a local array with the values provided in the assignment specifacations
	Also created a variable size which is set to 11
	Array and size are passed into each function
	 */
	int size = 11;
	int d[size] = {-48,-14,-8,0,1,3,16,23,26,32,36};
	
	problemOne(d,size);
	problemTwo(d,size);
	problemThree(d,size);
	problemFour(d,size);
	problemFive(d,size);

	return 0;
}

void problemOne(int array[], int arraySize)
{
	cout << "1) If X is odd, then X > 0\n" << endl;
	for(int i = 0; i < arraySize; i++)
	{
		/*
			Use modulus operator on array values to check if they're odd
			and we also check if array values are above 0	
		*/
		if(array[i] % 2 == 1 && array > 0)
		{
			cout << "The valid numbers are " << array[i] << endl;
		}
		else if ((array[i] % 2 == 1 && !array > 0))
		{
			cout << "The counterexamples are " << array[i] << endl;
		}
	}
	cout << "\n";
	
}

void problemTwo(int array[], int arraySize)
{
	cout << "2) If X is less than 0, then X is even\n" << endl;
	for(int i = 0; i < arraySize; i++)
	{
		/*
			Use modulus operator on array values to check if they're even
			and we also check if array values are less than 0
		*/
		if(array[i] < 0 && array[i] % 2 == 0)
		{
			cout << "The valid numbers are " << array[i] << endl;
		}
		else if ((array[i] < 0 && !array[i] % 2 == 0))
		{
			cout << "The counterexamples are " << array[i] << endl;
		}
	}
	cout << "\n";
}

void problemThree(int array[], int arraySize) 
{
	cout << "3) If X is even, then X <= 0\n" << endl;
	for(int i = 0; i < arraySize; i++)
	{
	/*
		Use modulus operator on array values to check if they're even
		and we also check if array values are less than or equal to 0	
	*/
		if(array[i] % 2 == 0 && array[i] <= 0)
		{
			cout << "The valid numbers are " << array[i] << endl;
		}
		else if((array[i] % 2 == 0 && !array[i] <= 0))
		{
			cout << "The counterexamples are " << array[i] << endl;
		}
	}
	cout << "\n";
}


void problemFour(int array[], int arraySize)
{
	cout << "4) If the ones digit of X is 2, then the tens digit is either 3 or 4\n" << endl;
	for(int i = 0; i < arraySize; i++)
	{
	/*
		Use modulus operator on array values to get the ones digit
		then we divide the array value by 10 and use modulus on that value
		to get the tens digit
	*/
		if((array[i] % 10 == 2) && (((array[i] / 10) % 10) == 3 || 4))
		{
			cout << "The valid numbers are " << array[i] << endl;
		}
		else if (((array[i] / 10) % 10 == 2) && (array[i] % 10 == !(3 || 4))) 
		{
			cout << "The counterexamples are " << array[i] << endl;
		}
	}
	cout << "\n";
}

void problemFive(int array[], int arraySize)
{
	cout << "5) If the ones digit of X is 6, then the tens digit is 1 or 2" << endl;
	for(int i = 0; i < arraySize; i++)
	{
	/*
		Use modulus operator on array values to get the ones digit
		then we divide the array value by 10 and use modulus on that value
		to get the tens digit
	*/	
		if((array[i] % 10 == 6) && (((array[i] / 10) % 10) == 1 || 2))
		{
			cout << "The valid numbers are " << array[i] << endl;
		}
		else if ((array[i] % 10 == 6) && (((array[i] / 10) % 10) == !(1 || 2)))
		{
			cout << "The counterexamples are " << array[i] << endl;
		}
	}
}


