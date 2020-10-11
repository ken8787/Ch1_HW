#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d is even\n", a);
	}
	else 
		printf("%d is odd\n", a);

	system("pause");
	return 0;
}