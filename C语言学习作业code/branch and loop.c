#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������������������������Լ��
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);



	return 0;
}



////дһ�δ����ӡ1-100֮������3�ı���������
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


////�Ӵ�С���3��ֵ
// 
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//����%d֮�����ɶ�����ӣ��������ݵ�ʱ��ʹ�ÿո��������
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d", a, b, c);
//	return 0;
//}