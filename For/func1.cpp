#include <math.h>
double summ(int n)
{
	double a = 0;
	for (int i = 0; i <= n - 1; ++i)
	{
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	}
	return(a);
}