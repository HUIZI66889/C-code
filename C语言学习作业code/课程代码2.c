#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP13
//ʵ��һ��ð�ݺ����������������������
void bubble_sort(int arr[],int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ��ð������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++) //sz-1-i��ÿһ�˱ȽϵĶԶ���
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}

}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��arr���������ų�����
	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ������Ԫ�صĵ�ַ��eg: &arr[0]
	bubble_sort(arr,sz); //ð����������sz��������
	for (i = 0; i < sz; i++) //�ٴα�����������
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


////BվP13
////��ά�������ڴ��еĴ洢
//int main()
//{
//	int arr[3][4] = { { 1,2,3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i,j,&arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////BվP13
////��ά����
//int main()
//{
//	int arr[3][4] = { { 1,2,3 }, { 4, 5 } };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


////BվP13
//һά����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i,&arr[i]);
//	}
//	return 0;
//}


////BվP13
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]); //���������С
//	int i = 0;
//	for (i = 0; i < sz; i++);
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////BվP13
//#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", sizeof(arr1)); //4
//	printf("%d\n", sizeof(arr2)); //3
//	printf("%d\n", strlen(arr1)); //3
//	printf("%d\n", strlen(arr2)); //15(���ֵ)
//	return 0;
//}


////BվP13
//int main()
//{
//	char arr[] = "abcdef";
//	//sizeof�Ǽ���arr��ռ�ռ�Ĵ�С������\0
//	printf("%d\n", sizeof(arr));
//	//strlen�������ַ����ĳ��ȣ��ҵ�\0ֹͣ
//	printf("%d\n", strlen(arr));
//	return 0;
//}


////BվP13
////����һ������-���10������
//int main()
//{
//	int arr[10];
//	char arr2[5];
//	return 0;
//}


////BվP12
////����
////���n��쳲��������������������---ѭ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--�����������������뺯����ô�ã��������ʵ�֣�
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	return 0;
//}


////BվP12
////�ݹ�
////���n��쳲��������������������---ǰ������֮�͵��ڵ�������
//int count = 0;
//int Fib(int n)
//{ 
//	//if (n == 3) //�����3��쳲��������ļ������
//	//{
//	//	count++;
//	//}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD--�����������������뺯����ô�ã��������ʵ�֣�
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n", count);
//	return 0;
//}


////BվP12
////�ݹ�
////��n�Ľ׳ˣ������������---�ݹ�ķ�ʽ
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n); //�ݹ�ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}


////BվP12
////����
////��n�Ľ׳ˣ������������---ѭ���ķ�ʽ
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n); //ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}


////BվP11
////�ݹ�
////��д��������������ʱ�����������в���count�������ַ����ĳ���
//
////�������̣��Ѵ��»�С
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0;
////3
// 
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	//str��ָ��b�ģ�����1ָ��i
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n", len);
//	return 0;
//}


////BվP11
////����
////��д�������ַ����ĳ���
////#include<string.h>
////ģʽʵ��strlen����
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++; //ָ�������һ����str��ָ��
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}

	
////BվP11
////�ݹ�
////����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ�����磺���룺1234�����1 2 3 4.
//void print(int n) //1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d ", &num);
//	print(num);
//	return 0;
//}


////BվP11
////��򵥵ĵݹ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//} //��ӡ�����hehe����ѭ��
