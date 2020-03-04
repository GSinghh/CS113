#include <iostream>

#include "assignment1.h"

using namespace std;

int main()
{
	logicGates comb1(true, true);
	logicGates comb2(true, false);
	logicGates comb3(false,true);
	logicGates comb4(false,false);
	int size = 4;
	logicGates arrayCombinations[size] = {comb1,comb2,comb3,comb4}; 
	disjunction(arrayCombinations,size);
	conjunction(arrayCombinations, size);
	exclusiveDisjunction(arrayCombinations, size);
	negation(arrayCombinations, size);
	tautology(arrayCombinations, size);
	DeMorgansLaw(arrayCombinations, size);

	
	return 0;
}
