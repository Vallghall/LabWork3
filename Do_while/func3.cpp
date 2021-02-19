#include <math.h>
#include <iostream>
void print(int n, int k)
{
	int i = -1;
	double a = 0;
	do
	{
		++i;
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if ((i) % k > 0)  
		std::cout << a << " ";
		else continue;
	} while (i <= (n-1));
}