#include <stdio.h>
#include <stdlib.h>
int maximum(int x, int y, int z);
void main()
{
	int num1,num2,num3;
	printf("Enter three integers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("Maximum is : %d\n", maximum(num1, num2, num3));
	system("pause");
	return 0;
}
int maximum(int x, int y, int z)
{
	int c;
	c = x;
	if (c < y)c = y;
	if (c < z)c = z;
	return c;
}
