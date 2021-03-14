#include <math.h>
double summ(int n)
{
	int i = 0;
	double a = 0;
	do
	{
		if (i > (n - 1)) { return (a); }
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		++i;
	} while (i <= (n - 1));
	return(a);
}