#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////BվP24
////ʹ��ָ���ӡ��������
////дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�룬arr��һ������һά����
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", * (p + i));
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


////BվP24
////��ӡ�����Ƶ�����λ��ż��λ��
////��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//��Ϊ�ڴ��д���ǲ��룬���Դ�ӡ�������ǲ���
//void print(int m)
//{
//	int i = 0;
//	printf("����λ��\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}


////BվP24
////�������λ�в�ͬλ�ĸ���
////����int(32λ)����m��n�Ķ����Ʊ��ʽ�У��ж��ٸ�λ(bit)��ͬ��
////eg:1999 2299��7��λ��ͬ
////ʹ�������ͬΪ0������Ϊ1
//
//int get_diff_bit(m, n) 
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int count = get_diff_bit(m,n);
//	printf("count = %d\n", count);
//	return 0;
//}


////BվP24
////ͳ�ƶ�������1�ĸ���
////дһ�����������ز�����������1�ĸ���
////һ�������ڴ��д���ǲ��룬Ӧ������1�ĸ���
////ʮ�����е�ÿһλ����ͨ��ģ10.��10�õ����������еĿ���ģ2����2
////������������֮�⣬����1.������λ����1��1��λ�롣2.n=n&(n-1)����>��λ��һ��ȥ��һ��1
////int count_bit_one(unsigned int n )//unsigned��Ը���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;//ȥ��һλ
//	}
//	return count;
//}
//int main()
//{
//	int a = 14;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����Ʊ�ʾ�У����룩�м���1
//	int count = count_bit_one(a);
//	printf("count = %d\n", count);
//	return 0;
//}


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