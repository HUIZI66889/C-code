#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////BվP34
////����ָ������
//int main()
//{
//	char* my_strcpy(char* dest, const char* src);
//	
//	//дһ������ָ��pf���ܹ�ָ��my_strcpy
//	char* (*pf)(char*, const char*);
//	
//	//дһ������ָ������pfarr���ܹ����4��my_strcpy�����ĵ�ַ
//	char* (*pfarr[4])(char*, const char*);
//	return 0;
//}


////BվP34
////����ָ������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//ָ������
//	int* arr[5];
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ
//	int (*pa)(int, int) = Add;//pa���Դ�Sub,Mul,Div�ĵ�ַ����Ϊ���ǵĲ����ͷ���������һ����
//	int (*parr[4])(int, int) = {Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//i��1���üӷ���i��2���ü���...��5��-1��6��0
//	}
//	return 0;
//}


////BվP34
////ָ��
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//p2��a�ĵ�ַָ���ַ��������ַ���Ϊ�����ַ������ܱ��޸�
//	//ָ�����飬�Ǹ����飬���ָ���
//	int* arr[10];//�����ÿ��Ԫ����int*
//	char* ch[5];
//	//����ָ�룬ָ������
//	int* p3;//����ָ�룬ָ�����ε�ָ��
//	char* p4;//�ַ�ָ�룬ָ���ַ���
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ȡ������ĵ�ַ��pa����һ������ָ��
//	//���������ָ��������ȥ������pa��Ϊint(*)[5]
//	return 0;
//}