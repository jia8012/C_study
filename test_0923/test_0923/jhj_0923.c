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
//	int ret = 0;   //���ֵ
//	int guess = 0;    //�µ�ֵ
//	ret = rand() % 100 + 1;
//	printf("%d", ret);
//	while (1)
//	{
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("�¶���\n");
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
//			printf("��Ϸ��ʼ\n");
//			break;
//		case 0:
//			printf("��Ϸ����\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
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
//		printf("û�ҵ�\n");
//	else
//		printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
//	return 0;
//}

//int main()
//{
//	
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������˳�����\n");
//	}
//}

//int main()
//{
//	char j,ch;
//	while(1)
//	{
//		printf("������һ����ĸ��");
//		scanf("%c", &j);
//		if (j >='a'&&j<='z')
//		{
//			j = j - 32;
//			printf("�Եĵ���%c\n", j);
//		}
//		else if(j >= 'A'&&j <= 'Z')
//		{
//			j = j + 32;
//			printf("�Եĵ���%c\n", j);
//		}
//		scanf("%c",&ch);    //���ռ��̻������еĻس�
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
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}


//int arr[20] = { 0 };
//void Menu1() 
//{
//	printf("1.���������ʼ��\n");
//	printf("3.�������\n");
//	printf("2.��������Ԫ��\n");
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
//	printf("����������Ĵ�С");
//	scanf("%d", &len);
//	printf("����������Ԫ��");
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
//			printf("�������");
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

