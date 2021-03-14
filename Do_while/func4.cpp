#include <math.h>
int findFirstElement(double eps)
{
	int i = 0;
	double a = 0;
	do
	{
		if (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) < eps) { return(' '); }
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) <= eps)
			break;
		++i;
	} while (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) >= eps);
	return(i - 1);
}