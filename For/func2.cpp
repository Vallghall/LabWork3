#include <math.h>
double summ2(double eps)
{
	double a = 0;
	for (int i = 0; fabs(pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)))) >= eps; ++i)
	{
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	}
	return(a);
}