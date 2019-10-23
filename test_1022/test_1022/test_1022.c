#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main() {
//	int num = 1;
//	int i = 0;
//	for ( num = 1; num < 1000; num++)
//	{
//		int j = 0;//存放因子的和
//		for (i = 1; i < num ; i++)
//		{
//			if (num%i == 0)
//			{
//				j += i;
//			}
//
//		}
//		if (num == j)
//		{
//			printf("%d ", num);
//		}
//	}
//	return 0;
//}


int main()
{
	int a = 1;
	int b = 1;
	int i = 1;
	for (i = 1; i <= 20; i++)
	{
		printf("%d\n%d\n", a, b);
		a = a + b;
		b = a + b;
	}
	return 0;
}