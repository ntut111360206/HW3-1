#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
	int x;
	for (x = 1; x <= 10; x++)
		printf("%.2f\t", sqrt(x));
	system("pause");
	return 0;
}