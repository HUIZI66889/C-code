#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP24
//ͳ�ƶ�������1�ĸ���
//дһ�����������ز�����������1�ĸ���
int main()
{
	
	return 0;
}


////BվP23
////�������飺������A�е����ݻ�������B�е����ݽ��н���������һ����
//int main()
//{
//	int arr1[]={ 1, 3, 5, 7, 9 };
//	int arr2[] = { 2, 4, 6, 8, 0 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	return 0;
//}


////BվP23
////���������������ʵ������
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr, sz);//�������ʼ��Ϊ0
//	Print(arr, sz);
//	Reverse(arr,sz);//���������ݱ��10��9��8��7...
//	Print(arr, sz);
//	return 0;
//}


//BվP23
//����һ���������飬��ɶ�����Ĳ���
//1.ʵ�ֺ���Init��ʼ������Ϊȫ0
//2.��ʵ��Print()����ӡ�����ÿ��Ԫ��
//3.ʵ��Reverse()�������������Ԫ�ص�����
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ
//void Init(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr,sz);//�������ʼ��Ϊ0
//	Print(arr, sz);
//	return 0;
//}