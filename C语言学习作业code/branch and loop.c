#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////��ӡ������дһ�δ��룬��ӡ100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���1.�Գ���������ֻ�ܱ�1������������
//		//����2��i-1������
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}


////��ӡ1000��2000��֮�������
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж��Ƿ������ꡣ1.�ܱ�4�������Ҳ��ܱ�100����������
//		//2.�ܱ�400����������
//		if (year%4 == 0 && year%100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}



////���������������������������Լ��
//
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//
//	while (m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


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