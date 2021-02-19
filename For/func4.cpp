#include <math.h>
int findFirstElement(double eps)
{
	int i = 0;
	double a = 0;
	for (i = 0; fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) >= eps; ++i)
	{
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) <= eps)
			break;
	} 
	return(i - 1);
}