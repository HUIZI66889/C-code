#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP22
//
int main()
{
	int* p;
	return 0;
}


////BվP21
////ָ��ָ��Ŀռ��ͷ�
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


////BվP21
////ָ��Խ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}


////BվP21
////�޸������е�Ԫ�أ�ѡ��ͬ��ָ������
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	//char* p = arr; //һ��ֻ��1���ֽڣ���arr��10*4=40���ֽ�
//	//ÿ��Ԫ�ظĳ�1
//	int i = 0;
//	for (i = 0; i <=10 ; i++)
//	{
//		*(p + i) = 1;
//	}
//	return 0;
//}


////BվP21
////ָ�����;�������
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}


////BվP21
////ָ��
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	int* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);//��ַ������һ�����ɼ�pa,pc�����Դ�ź�a�ĵ�ַ
//	return 0;
//}