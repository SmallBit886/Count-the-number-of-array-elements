#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//������10�����͵�����
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//������20���ַ��͵�����
char ch[20];
//������10�������͵�����
float arr2[10];

int main()
{
	int a = 1;
	//int 4�ֽ�32����λ
	//int a =1��000000000000000000000000000000001
	printf("%d\n", a);	//1
	printf("%d\n",!a);	//0
	//��������Ԫ�ظ���===�����ܴ�С/ÿ��Ԫ�صĴ�С
	int sz = sizeof(ch) / sizeof(ch[0]);
	printf("%zd\n", sz);	//20
	printf("%zd\n", sizeof(ch));//20�ֽ�
	int b = a << 1;//000000000000000000000000000000010
	printf("%d\n",b);//2

	int c = a & b;//000000000000000000000000000000000
	int d = a | b;//000000000000000000000000000000011
	int e = a ^ b;//000000000000000000000000000000011
	printf("%d\n", c);//0
	printf("%d\n", d);//3
	printf("%d\n", e);//3

	//int i = 0;
	//while(i<10)
	//{

	//	printf("%d\n", arr[i]);
	//	i++;
	//}


	return 0;
}