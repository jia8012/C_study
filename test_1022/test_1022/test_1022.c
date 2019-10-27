#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

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


//int main()
//{
//	int a = 1;
//	int b = 1;
//	int i = 1;
//	for (i = 1; i <= 20; i++)
//	{
//		printf("%d\n%d\n", a, b);
//		a = a + b;
//		b = a + b;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	char a = NULL;
//	printf("请再输入一个字母\n");
//	a = getchar();
//	switch (a)
//	{
//	case 's':
//		while (1)
//		{
//			getchar();
//			printf("请再输入一个字母\n");
//			a = getchar();
//			if (a == 'u')
//			{
//				printf("Sunday");
//				return 0;
//			}
//			if (a == 'a')
//			{
//				printf("Saturday");
//				return 0;
//			}
//		}
//		break;
//	case 'm':
//		printf("Monday");
//		break;
//	case 't':
//		while (1)
//		{
//			getchar();
//			printf("请再输入一个字母\n");
//			a = getchar();
//			if (a == 'u')
//			{
//				printf("Tuesday");
//				return 0;
//			}
//			if (a == 'h')
//			{
//				printf("Thursday");
//				return 0;
//			}
//		}
//		break;
//	case 'w':
//		printf("Wednesday");
//		break;
//	case 'f':
//		printf("Friday");
//		break;
//	default:
//		printf("请重新输入\n");
//		break;
//	}
//	return 0;
//}
//
//int len(char arr[])
//{
//	int i = 0;
//	while (arr[i]!=0)
//	   i++; 
//	return i;
//}
//
//int main()
//{
//	char arr[40] = {0};
//	int length = 0, col = 0;
//	scanf("%d", &col);
//	getchar();
//	gets(arr);
//	length = len(arr);
//	for (int i = 0; i < col; i++)
//	{
//		for (int j = i; j < length;)
//		{
//			printf("%c", arr[j]);
//			j += col;
//		}
//		printf("\n");
//	}
//    //this is a test case
//	printf("%d", length);
//	return 0;
//}


int main()
{
	int num = 0;
	scanf("%d", &num);
	//printf("%d\n", num);
	int i = 0;
	int ret = 0;
	for (i = 1; 1 < 1000; i++)
	{
		ret = (i*i) * 2 - 1;
		if (ret >= num)break;
	}
	ret = num - ((i - 1)*(i - 1) * 2 - 1);
	printf("多出%d个\n", ret);
	printf("%d行\n", 2 * i - 3);
	printf("%d", i);
	int row = 2 * i - 3;//行数
	int j = 0;
	int k = 0;
	for (j = 0; j < i - 1; j++) 
	{

	}
	//char arr[20][20] = {'#'};
	//for (j = 0; j < 20; j++)
	//{
	//	for (k = 0; k < 20; k++)
	//	{
	//		arr[j][k] = '#';
	//		printf("%c", arr[j][k]);
	//	}
	//	printf("\n");
	//}
	//for (j = 0; j < i-1; j++)
	//{
	//	for (k = 0; k < row; k++)
	//	{
	//		if (j-k>0&&)
	//		{
	//			arr[j][k] = '*';
	//			printf("%c", arr[j][k]);
	//		}
	//	}
	//	printf("\n");
	//}
	//int a = 0; int b = 0; int c = 0; int d = 0;
	return 0;
}

