#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int b;
	int c;
	int a;
	int d;
	int e;
	int f;

	printf("Enter account number (-1 to end ):\n");
	scanf_s("%d", &a);
	printf("Enter beginning balance:\n");
	scanf_s("%d", &b);
	printf("Enter total charge:\n");
	scanf_s("%d", &c);
	printf("Enter total credits:\n");
	scanf_s("%d", &d);
	printf("Enter credit limit:\n");
	scanf_s("%d", &e);

	f = b + c - d;

	if (f > e)
	{
		printf("Account:\t");
		printf("%d\n", a);
		printf("Credit limit:\t");
		printf("%d\n", e);
		printf("Balance:\t");
		printf("%d\n", f);
		printf("Credit Limit Exceeded");

	}
	
	return 0;
}