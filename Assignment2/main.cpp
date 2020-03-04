#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class boolean
{
	bool c, t;

	public:
	bool getC()
	{
		return c;
	}
	bool getT()
	{
		return t;	
	}
	
	boolean()
	{
		c = true;
		t = false;
	}
	boolean(bool cars, bool trucks)
	{
		c = cars;
		t = trucks;
	}
};

void equivalance(boolean[], int);

int main()
{
	int size = 4;
	boolean obj1(true,true);
	boolean obj2(true, false);
	boolean obj3(false, true);
	boolean obj4(false,false);

	boolean array[size] = {obj1,obj2,obj3,obj4};

	equivalance(array,size);
	
	return 0;
}

void equivalance(boolean c[], int size)
{
	bool temp1,temp2,temp3;
	int counter = 1;

	string doc1, doc2, doc3, doc4, k;
	doc1 = "document1.txt"; //Holds "Cars"
	doc2 = "document2.txt"; //Holds "Trucks"
	doc3 = "document3.txt"; //Holds "Cars and Trucks"
	doc4 = "document4.txt"; //Holds Neither "Cars or Trucks"
	ifstream infile;
	

	cout << "De Morgan’s laws commonly apply to text searching using Boolean" << endl; 
	cout << "operators AND, OR, and NOT. Consider a set of documents containing" << endl; 	
	cout << "the words “cars” and “trucks”. De Morgan’s laws hold that these two" << endl; 	
	cout << "searches will return the same set of documents:" << endl;
	cout << "Search A: NOT (cars OR trucks)" << endl;
	cout << "Search B: (NOT cars) AND (NOT trucks)" << endl;
	cout << "Choose a search option: ";

		cout << "You've chosen choice A which is !(c || t)" << endl;
		for(int i = 0; i < size; i++)
		{
			temp1 = !(c[i].getC() || c[i].getT());
			cout << c[i].getC() << "  " << c[i].getT() << "  " <<  temp1 << "    "<< "Document";
			cout << counter;
			cout << ".txt" << endl;
			counter++;
				
		}
		
	
	
}
