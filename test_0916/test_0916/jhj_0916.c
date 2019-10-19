#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <math.h>

//int main()
//{
//	int i = 101;
//	int num = 0;
//
//	while (i <= 200)
//	{
//		int a = 0;
//		int j = 2;
//		while (j < i)
//		{
//			if (i%j == 0)
//			{
//				a = 1;
//				break;
//			}
//			j++;
//		}
//		if (a == 0)
//		{
//			num++;
//			printf("%d ", i);
//		}
//	
//		i++;
//
//	}
//	printf("num=%d", num);
//	getchar();
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 9)     //行数
//	{
//		int j = 1;
//		while (j <= i)    //列数
//		{
//			printf("%d*%d=%d ", i, j, i*j);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	getchar();
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	int a = 0;
//	while (year<=2000)
//	{
//		if (year % 4 == 0)
//		{
//			if(year%100!=0)
//				printf("%d ", year);
//		}
//		if(year%400==0)
//			printf("%d ", year);
//		year++;
//	}
//	
//	getchar();
//	return 0;
//}
int add(int x, int y)
{
	int z = x + y;
	return z;
}
int main()
{
	int num = 0;
	int num1 = 0;
	int sum = 0;
	scanf("%d%d", &num, &num1);
	sum = add(num,num1);
	printf("%d",sum);
}