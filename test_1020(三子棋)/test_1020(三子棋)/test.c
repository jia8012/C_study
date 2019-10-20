#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };  //棋盘大小
	InitBoard(board, ROW, COL);  //初始化棋盘
	DisplayBoard(board, ROW, COL);  //显示棋盘
	while (1)
	{
		PlayerMove(board,ROW,COL);  //玩家走
		DisplayBoard(board, ROW, COL);  //显示棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);  //电脑走
		DisplayBoard(board, ROW, COL);  //显示棋盘
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if(ret =='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
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
	//玩游戏
	int choose = 0;    //选择
	srand((unsigned int)time(NULL));
	do
	{
		meun();
		printf("请选择：");
		scanf("%d", &choose);    //选择
		switch (choose)    
		{
		case 1:
			game();     //游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;      //退出
		default:
			printf("选择错误重新选择\n");
			break;
		}
	} while (choose);
}
int main()
{
	Test();
	return 0;
}
