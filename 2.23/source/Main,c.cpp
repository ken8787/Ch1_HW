#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		printf("%d is the largest\n", a);
	}

	if (b > c && b > a)
	{
		printf("%d is the largest\n", b);
	}

	if (c > b && c > a)
	{
		printf("%d is the largest\n", c);
	}

	if (a < b && a < c)
	{
		printf("%d is the smallest\n", a);
	}

	if (b < c && b < a)
	{
		printf("%d is the smallest\n", b);
	}

	if (c < b && c < a)
	{
		printf("%d is the smallest\n", c);
	}

	system("pause");
	return 0;
}