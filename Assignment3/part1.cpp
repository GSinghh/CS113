#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

int to_int(const string&b);

int main()
{
	string binary = " ";
	cout << "Enter a binary number to convert: ";
	cin >> binary;

	int decimal = to_int(binary);
	cout << "The binary conversion of " << binary << " is " <<  decimal << endl;
}

int to_int(const string& s)
{
	int array[s.length()] = {};
	int exponent = 0;
	int base = 2;
	int sum = 0;
	int multiplesOfTwo[s.length()] = {};
	int conversion;
	int decimal = 0;
	istringstream(s) >> conversion;
	

		for(int i = s.length(); i > 0; i--) //populate array with powers of 2
		{	
			sum = pow(base, exponent);
			multiplesOfTwo[i] = sum;
			exponent++;
		}	

		for(int i = s.length(); i > 0;i--) // Store binary value inside array
		{
		array[i] = conversion % 10;
		conversion /= 10;
		}

		for(int i = 0; i <= s.length();i++)
		{	
			decimal += array[i] * multiplesOfTwo[i];
		}
	
	return decimal;
}
