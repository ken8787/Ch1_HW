#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b=0;
	int c=0;
	printf("number  square  cube\n");
	for (int a = 0; a <= 10; a++)
	{
		b = a * a;
		c = a * a * a;
		printf("%d\t%d\t%d\n", a, b, c);
	}
	
	system("pause");
	return 0;
}