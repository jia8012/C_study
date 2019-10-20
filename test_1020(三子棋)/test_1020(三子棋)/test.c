#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };  //���̴�С
	InitBoard(board, ROW, COL);  //��ʼ������
	DisplayBoard(board, ROW, COL);  //��ʾ����
	while (1)
	{
		PlayerMove(board,ROW,COL);  //�����
		DisplayBoard(board, ROW, COL);  //��ʾ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);  //������
		DisplayBoard(board, ROW, COL);  //��ʾ����
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if(ret =='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
meun()
{
	printf("****************************\n");
	printf("********  1.play    ********\n");
	printf("********  0.exit    ********\n");
	printf("****************************\n");
}
void Test()
{
	//����Ϸ
	int choose = 0;    //ѡ��
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("��ѡ��");
		scanf("%d", &choose);    //ѡ��
		switch (choose)    
		{
		case 1:
			game();     //��Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;      //�˳�
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (choose);
}
int main()
{
	Test();
	return 0;
}
