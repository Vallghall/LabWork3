#include <math.h>
#include <iostream>
void print(int n, int k)
{
	double a = 0;
	for (int i = 0; i <= (n - 1); ++i)
	{
		a += pow(-1, i) * (1 - (pow(2, i) / (pow(2, i) + 1)));
		if ((i) % k > 0)
			std::cout << a << " ";
		else continue;
	}
}