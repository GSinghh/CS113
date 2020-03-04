	
	#include "lib.h"
		
	bool conjunction(bool p, bool q)
	{
		return p && q;
	}
	
	bool disjunction(bool p, bool q)
	{
		return p || q;
	}
	
	bool exclusiveDisjunction(bool p, bool q)
	{
		if((p && q) == true)
		{
		return false;
		}
		else
		{
		return !(p || q);
		}
	}
	
