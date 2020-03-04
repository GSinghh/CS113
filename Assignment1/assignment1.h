#pragma once
//This is the header file which will include the functions
class logicGates
{
	bool val1;
	bool val2;

	public:
	bool getVal1()
	{
		return val1;
	}
	bool getVal2()
	{
		return val2;	
	}
	
	logicGates()
	{
		val1 = true;
		val2 = false;
	}
	logicGates(bool yes, bool no)
	{
		val1 = yes;
		val2 = no;
	}
};
void conjunction(logicGates[], int);
void disjunction(logicGates[], int);
void exclusiveDisjunction(logicGates[], int);
void negation(logicGates[], int);
void tautology(logicGates[], int);
void DeMorgansLaw(logicGates[], int);
