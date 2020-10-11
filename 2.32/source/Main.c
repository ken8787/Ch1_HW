#include <stdio.h>
#include <stdlib.h>


int main()
{
	double b ;
	double c ;
	double a ;
	double d ;
	printf("Enter your weight(kg):\n");
	scanf_s("%lf", &b);
	printf("Enter your height(m):\n");
	scanf_s("%lf", &c);
	d = c * c ;
	a = b / d ;
	if (a < 18.5)
	{
		printf("%lf\n", a);
		printf("Underweight\n");
	}
	if (a >= 18.5 && a <= 24.9)
	{
		printf("%lf\n", a);
		printf("Normal\n");
	}
	if (a >= 25 && a <= 29.9)
	{
		printf("%lf\n", a);
		printf("Overweight\n");
	}
	if (a >= 30)
	{
		printf("%lf\n", a);
		printf("Obese\n");
	}
	system("pause");
	return 0;
}