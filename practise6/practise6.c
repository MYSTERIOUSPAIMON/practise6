#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//����n��k�η�
double pow(int n, int k)
{
	if (k == 0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * pow(n, k - 1);
	}
	else
	{
		return 1.0 / (pow(n, -k));
	}
}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = pow(n, k);
	printf("%lf", ret);
	return 0;
}