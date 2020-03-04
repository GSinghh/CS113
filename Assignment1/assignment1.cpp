
	#include "assignment1.h"
	#include <iostream>
	using namespace std;
		
	void conjunction(logicGates c[], int size)
	{
		cout << "***************Conjunction***************" << endl;
		for(int i = 0; i < size; i++)
		{
			if(c[i].getVal1() && c[i].getVal2())
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " True " << endl;
			}
			else 
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " False" << endl;
			}			
		}
	}
	
	void disjunction(logicGates c[], int size)
	{
		cout << "***************Disjunction***************" << endl;
		for(int i = 0; i < size; i++)
		{
			if(c[i].getVal1() || c[i].getVal2())
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " True " << endl;
			}
			else 
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " False" << endl;
			}			
		}
		
	}
	
	void exclusiveDisjunction(logicGates c[],int size)
	{
		cout << "***************Exclusive Disjunction***************" << endl;
		for(int i = 0; i < size; i++)
		{
			if(c[i].getVal1() && c[i].getVal2())
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " False " << endl;
			}
			else if(c[i].getVal1() || c[i].getVal2())
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " True" << endl;
			}
			else
			{
				cout << c[i].getVal1() << " " << c[i].getVal2() << " False" << endl;
			}			
		}
		
	}
	void negation(logicGates c[], int size)
	{
		cout << "***************Negation***************" << endl;
		for(int i = 0; i < size; i++)
		{
			cout << (c[i].getVal1()) << " " << (c[i].getVal2()) << " Original Values " << endl;
		}
		cout << endl;
		for(int i = 0; i < size;i++)
		{
			
				cout << !(c[i].getVal1()) << " " << !(c[i].getVal2()) << " Negation Values " << endl;
			
		}
		cout << endl;
	}

	void tautology(logicGates c[], int size)
	{
		bool temp1, temp2, temp3;
		cout << "**************************************" << endl; 
		cout << "Truth table for (p∧q)∨(∼ p∨∼ q)" << endl;
		for(int i = 0; i < size; i++)
		{
			temp1 = c[i].getVal1() && c[i].getVal2();
			temp2 = !c[i].getVal1() || !c[i].getVal2();
			temp3 = temp1 || temp2;
			cout << "(p∧q)" << "  " << "(∼ p∨∼ q)     (p∧q)∨(∼ p∨∼ q)" << endl;
			cout << temp1 << "         " << temp2 << "            " << temp3<< endl;
		}
		cout << "\n" << endl;
		cout << "Since the final result came out to all true" << endl;
		cout << "It is a tautology\n" << endl;
		

		cout << "Show that p∨∼ p is a tautology" << endl;
		for(int i = 0; i < size; i++)
		{
			temp1 = c[i].getVal1();
			temp2 = !c[i].getVal1();
			temp3 = temp1 || temp2;
			cout << "p  ~p Final" << endl;
			cout << temp1 << "  " << temp2 << "  " << temp3<< endl;
			 
		}
		cout << "Since the final result came out to all true" << endl;
		cout << "It is a tautology" << endl;
		cout << "**************************************\n" << endl;
	}
	
	void DeMorgansLaw(logicGates c[], int size)
	{
		bool temp1, temp2, temp3;
		cout << "Show that ∼ (p∨q) ≡ ∼ p∧∼ q" << endl;
		for(int i = 0; i < size; i++)
		{
			temp1 = !(c[i].getVal1() || c[i].getVal2());
			temp2 = !c[i].getVal1() && !c[i].getVal2();
			cout << temp1 << " ≡ " << temp2 << "  " << endl;
			
		}
		cout << "Show that ∼ (p∧q) ≡∼ p∨∼ q" << endl;
		for(int i = 0; i < size; i++)
		{
			temp1 = !(c[i].getVal1() && c[i].getVal2());
			temp2 = !c[i].getVal1() || !c[i].getVal2();
			cout << temp1 << " ≡ " << temp2 << "  " << endl;
		}
		cout << "Show that ∼ (∼ p) ≡ p" << endl;
		for(int i =0; i < size; i++)
		{
			temp1 = !(!c[i].getVal1());
			temp2 = c[i].getVal1();
			cout << temp1 << " ≡ " << temp2 << "  " << endl;
		}
	}
