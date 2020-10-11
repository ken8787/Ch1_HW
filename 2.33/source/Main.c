#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a ;
	int b ;
	int c ;
	int d ;
	int e ;
	int f ;

	printf("一整天的總里程數\n");
	scanf_s("%d", &a);
	printf("汽油一公升/加侖多少錢\n");
	scanf_s("%d", &b);
	printf("平均一公升/加侖能行駛多少公里\n");
	scanf_s("%d", &c);
	printf("一天的停車費\n");
	scanf_s("%d", &d);
	printf("一天的通行費(過路費)\n");
	scanf_s("%d", &e);

	f = a / c * b + d + e;

	printf("使用者一天下來開車去工作的花費:%d\n", f);
	

	system("pause");
	return 0;
}