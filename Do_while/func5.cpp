#include <math.h>
int findFirstNegativeElement(double eps)
{
	int i = 0;
	double a = 0;
	double s = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
	do
	{
		if (fabs(s) <= eps && s < 0) { return(i); }
		s = pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		a += s;
		++i;

	} while (true);
}