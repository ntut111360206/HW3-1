#include <stdio.h>
#include <stdlib.h>
double Power(double, int);
void main()
{
	int k;
	double ans;
	printf("�p��3.5��k����?�п�Jk=");
	scanf_s("%d", &k);
	ans = Power(3.5, k);
	printf("3.5��%d����=%f\n", k, ans);
	system("pause");
	return 0;
}
double Power(double x, int n)
{
	int i;
	double xn = 1;
	for (i = 1; i <= n; i++) {
		xn = xn*x;
	}
	return xn;
}
