#include "functions.h"


float findMinValue(float n1, float n2, float n3)
{
	float min = n1;
	
	if (min > n2) min = n2;
	if (min > n3) min = n3;	
	return min;
}
