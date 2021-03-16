#include <cmath>
#include <math.h>
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a = 0;
	for (i = 0; i < INT_MAX>= 0; ++i)
	{
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) <= eps && (pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) < 0)
		{
			return(i + 1);
		}
	}
}