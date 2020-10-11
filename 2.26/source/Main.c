#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	if (a % b == 0 && a > b)
	{
		printf("%d is multiple of %d\n", a, b);
	}
	else if (b % a == 0 && b > a)
	{
		printf("%d is  multiple of %d\n", b, a);
	}
	else if (b % a != 0 && b > a)
	{
		printf("%d is not multiple of %d\n", b, a);
	}
	else
		printf("%d is not multiple of %d\n", a, b);


	system("pause");
	return 0;
}