double First(double n)
{
	return 0.1 * n;
}
double Second(double n)
{
	return 0.75 * (n - 10)+1;
}
double Third(double n)
{
	return 0.05 * (n - 20);
}
double Forth(double n)
{
	return 0.03 * (n - 40);
}
double Fifth(double n)
{
	return 0.015 * (n - 60);
}
double Sixth(double n)
{
	return 0.01 * (n - 100);
}
#include<stdio.h>
int main()
{

	double ret = 0;
	double n = 0;
again:
	scanf_s("%lf", &n);
	if (n < 10.0)
	{
		ret = First(n);
		printf("%lf", ret);
	}
	else if (10.0< n <20.0)
	{
		ret = Second(n);
		printf("%lf", ret);

	}
	else if (20.0 <n < 40.0)
	{
		ret = Third(n);
		printf("%lf", ret);

	}
	else if (40.0< n < 60.0)
	{
		ret = Forth(n);
		printf("%lf", ret);
	}
	else if (60.0 < n < 80.0)
	{
		ret = Fifth(n);
		printf("%lf", ret);
	}
	else if (100.0 < n)
	{
		ret = Sixth(n);
		printf("%lf", ret);

	}
	else 
	{
		printf("您输入错误，请重新输入\n");
		goto again;
	}
	return 0;
}