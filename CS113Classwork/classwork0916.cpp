#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 1;
	int y = 1;
	int z = 0;

	
	cout << "We will print out Fibonacci's Algorithm" << endl;
	for(int i = 0; i < 10; i++)
	{
		z = x + y;
		cout << z << " ";
		x = y;
		y = z;
	}	
	cout << endl;

	return 0;
}
