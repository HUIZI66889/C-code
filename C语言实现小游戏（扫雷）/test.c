#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void menu()
{
	printf("*****************************************\n");
	printf("*****************1. play  ***************\n");
	printf("*****************0. exit  ***************\n");
	printf("*****************************************\n");
}

void game()
{
	printf("ɨ��\n");
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
		default:
			printf("ѡ���������ѡ��");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}