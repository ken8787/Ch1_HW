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

	printf("�@��Ѫ��`���{��\n");
	scanf_s("%d", &a);
	printf("�T�o�@����/�[�ڦh�ֿ�\n");
	scanf_s("%d", &b);
	printf("�����@����/�[�گ��p�h�֤���\n");
	scanf_s("%d", &c);
	printf("�@�Ѫ������O\n");
	scanf_s("%d", &d);
	printf("�@�Ѫ��q��O(�L���O)\n");
	scanf_s("%d", &e);

	f = a / c * b + d + e;

	printf("�ϥΪ̤@�ѤU�Ӷ}���h�u�@����O:%d\n", f);
	

	system("pause");
	return 0;
}