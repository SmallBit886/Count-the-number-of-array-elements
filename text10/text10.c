#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//定义存放10个整型的数组
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//定义存放20个字符型的数组
char ch[20];
//定义存放10个浮点型的数组
float arr2[10];

int main()
{
	int a = 1;
	//int 4字节32比特位
	//int a =1；000000000000000000000000000000001
	printf("%d\n", a);	//1
	printf("%d\n",!a);	//0
	//计算数组元素个数===数组总大小/每个元素的大小
	int sz = sizeof(ch) / sizeof(ch[0]);
	printf("%zd\n", sz);	//20
	printf("%zd\n", sizeof(ch));//20字节
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