#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//#include <time.h>
//void menu()
//{
//	printf("**************************************\n");
//	printf("***********  1.play  *****************\n");
//	printf("***********  0.exit  *****************\n");
//	printf("**************************************\n");
//}
//void game()
//{
//	int ret = 0;   //随机值
//	int guess = 0;    //猜的值
//	ret = rand() % 100 + 1;
//	printf("%d", ret);
//	while (1)
//	{
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int choose = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		scanf("%d", &choose);
//
//		switch (choose)
//		{
//		case 1:
//			game();
//			printf("游戏开始\n");
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误，请重新选择\n");
//			break;
//		}
//	} while (choose);
//}

//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	ret = binary_search(arr, k, sz);
//	if (ret == -1)
//		printf("没找到\n");
//	else
//		printf("找到了，下标是：%d\n",ret);
//	return 0;
//}

//int main()
//{
//	
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("输入错误，退出程序\n");
//	}
//}

//int main()
//{
//	char j,ch;
//	while(1)
//	{
//		printf("请输入一个字母：");
//		scanf("%c", &j);
//		if (j >='a'&&j<='z')
//		{
//			j = j - 32;
//			printf("对的的是%c\n", j);
//		}
//		else if(j >= 'A'&&j <= 'Z')
//		{
//			j = j + 32;
//			printf("对的的是%c\n", j);
//		}
//		scanf("%c",&ch);    //接收键盘缓冲区中的回车
//	} 
//		
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d  ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void exchange(int *x, int *y)
//{
//	*x ^= *y;
//	*y ^= *x;
//	*x ^= *y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	exchange(&a, &b);
//	printf("%d  %d\n", a, b);
//	return 0;
//}

//int IsRun(int x)
//{
//	if ((x % 400 == 0) || (x % 100 != 0 && x % 4 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	if (IsRun(y))
//		printf("是闰年");
//	else
//		printf("不是闰年");
//	return 0;
//}


//int arr[20] = { 0 };
//void Menu1() 
//{
//	printf("1.进行数组初始化\n");
//	printf("3.清空数组\n");
//	printf("2.逆置数组元素\n");
//}
//
//void Inti(int len) {
//	int i = 0;
//	for (i = 0; i < len; ++i) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//	int num=0;
//	printf("请输入数组的大小");
//	scanf("%d", &len);
//	printf("请输入数组元素");
//	for ( i = 0; i < len; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	do
//	{
//		Menu1();
//		switch (num )
//		{
//		case 1:
//			Init(len);
//			break;
//		case 2:
//			break;
//		case 3:
//			break;
//		default:
//			printf("输入错误");
//			break;
//		}
//	} while (len);
//	return 0;
//}

int my_strlen(const char* arr)
{
	int num = 0;
	assert(arr != NULL);
	char a = "a";
	while (*arr++)
	{
		num++;
	}
	return num;
}

int main()
{
	char arr[] = "hello";
	printf("%d", my_strlen(arr));
	return 0;
}

