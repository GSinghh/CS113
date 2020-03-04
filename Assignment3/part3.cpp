#include <iostream>

using namespace std;

bool isPositive(int n)
{
	return n > 0; 
}

int main()
{
	int number;
	cout << "Enter in a number: ";
	cin >> number;
	bool yeet = isPositive(number);
	if(yeet == 1)
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
	return 0;

}


