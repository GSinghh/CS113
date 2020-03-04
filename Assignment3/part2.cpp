#include <iostream>
#include <string>

using namespace std;

void to_binary(int, int);

int main()
{
	int decimal = 0;
	int bits = 0;
	string binary = " ";
	cout << "Enter in a decimal value to convert: ";
	cin >> decimal;
	cout << "Enter in the number of bits: ";
	cin >> bits;
	to_binary(decimal, bits);


	return 0;
}

void to_binary(int dec, int bit)
{
	for(int i = bit - 1; i >= 0; i--)
	{
		int c  = dec >> i; //shifting all the way to the right
		int d = c & 1; //using and operator to give true or false value
		if(d)
		{
			cout << "1 ";
		}
		else
		{
			cout << "0";		}
	}
}
