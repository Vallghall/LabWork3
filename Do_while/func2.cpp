#include <math.h>
double summ2(double eps)
{
	int i = 0;
	double a = 0;
	do
	{
		if (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) < eps) { return(a); }
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		++i;
	} while (fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) >= eps);
	return(a);
}