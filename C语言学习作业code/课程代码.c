#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP9
//��������Ϸ

void menu() //void��������ֵΪ��
{
	printf("########################\n");
	printf("#   1.play    0.exit   #\n");
	printf("########################\n");
}

#include<stdlib.h>
#include<time.h>
void game()
{
	//1.����һ���������rand()���������������
	//2.������

	int ret = 0;
	int guess = 0;

	//��ʱ�����������������������
	//srand��������������ǻᱻ���úܶ�Σ�ʹ�����ɵ��������������ѡ��1��ʱ�����������һ�������������Է������棬����һ�ξͿ���

	ret = rand()%100+1;//ԭ����ret = rand(),����0~32767֮�������̫�󣬹�ȡģ��1��ʹ������0~100֮�������
	/*printf("%d\n", ret);*/
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
			if (guess > ret)
			{
				printf("�´���\n");
			}
			else if (guess < ret)
			{
				printf("��С��\n");
			}
			else
			{
				printf("��ϲ�㣬�¶���\n");
				break;
			}
	}
}   


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL)); //time���������Σ�ǰ���������ǿ������ת����unsigned int
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		    break;
 		}
	} while (input); //case 1��default��Ҫ����ѭ������Ϊcase 0��ʱ��Ϊ�٣��˳���Ϸ
	return 0;
}