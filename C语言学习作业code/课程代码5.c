#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//BվP22
//ָ������
int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//����������ָ��
	//��������-�������
	//�ַ�����-����ַ�
	//ָ������-���ָ��
	int* arr2[3] = {&a,&b,&c};//ָ������
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", * (arr2[i]));
	}
	return 0;
}


////BվP22
////����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ������
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;//pppa������ָ��
//	printf("%d\n", **ppa);//10
//	return 0;
//}

////BվP22
////ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;//p+i���±�ΪiԪ�صĵ�ַ
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);//��ӡ���0-9
//	}
//	return 0;
//}


////BվP22
////ָ�������
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p====== %p\n", p + i, &arr[i]);//p+i��&arr[i]��һ���ģ���ӡ�����Ľ����һ��
//	}
//	return 0;
//}


////BվP22
////ģ��ʵ��strlen
////֮ǰʵ��strlenʹ����1.�ݹ�ķ�ʽ��2.�������ķ�ʽ
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


////BվP22
////ָ���ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d", &arr[9] - &arr[0]);//9���м��Ԫ�ظ���
//	return 0;
//}

////BվP22
////ָ��Ӽ�����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;//������������Ԫ�ص�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 1;//ָ�������һλ
//	}
//	return 0;
//}


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