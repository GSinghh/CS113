#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int base = 2;	
	for(int i = 1; i <= 32; i++)
	{
		cout << pow(base,i) << endl;		
	}
	return 0;
}
