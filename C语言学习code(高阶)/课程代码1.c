#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////BվP32
////ָ��������ȷʹ�÷���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));//ָ�����ƫ��jλ
//		}
//		printf("\n");
//	}
//	return 0;
//}


////BվP32
////ָ������
//int main() 
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for(i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}


////BվP32
////ָ��
//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//32λƽָ̨��Ĵ�С��4���ֽ�/һ��Ԫ�صĴ�С��4�ֽ�=1
//	printf("%d\n", sz);//1
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

////BվP29
////����
//int main()
//{
//	unsigned int i = -1;
//	printf("%u\n", i);
//	return 0;
//}


////BվP28
////дһ�δ���������ǵ�ǰ�������ֽ�����ʲô(��)
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


////BվP28
////дһ�δ���������ǵ�ǰ�������ֽ�����ʲô(����)
//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	return *p;
//}
//int main()
//{
//	//����1��С�ˣ�  ����0�����
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


////BվP28
////дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
//int main()
//{
//	int a = 1;//0x00000001
//	char* p = (char*)&a;//��a����ǿ������ת����charֻ��һ���ֽ�
//	if (*p == 1)
//	{
//		printf("С��\n");//01000000
//	}
//	else
//	{
//		printf("���\n");//00000001
//	}
//	return 0;
//}


////BվP28
////�������ڴ��д���ǲ��룬cpuֻ��ִ�мӷ�
////1-1���������
////int main()
//{
//	1 - 1;
//	//����1+��-1��
//	//1�Ĳ��룺00000000000000000000000000000001
//	//-1�Ĳ��룺11111111111111111111111111111111
//	//�����������100000000000000000000000000000000��33������
//	//ֻ�ܴ�32�����������ӽ����Ϊ00000000000000000000000000000000��32��0��
//	return 0;
//}