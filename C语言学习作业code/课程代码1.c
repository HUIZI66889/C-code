#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP10
//��������ʽ����
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
 } //������Ϊ4321���ڲ�printf������ӡ��֮��ķ���ֵ���м��printf,�м亯����ӡ�ķ���ֵ����㺯��
//printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
 
 
////BվP10
////��������ʽ����
//int main()
//{
//	int len = 0;
//	//��1��д��
//	len = stlen("abc");
//	printf("d\n", len); //����д��
//	//��2��д��
//	printf("%d\n", strlen("abc")); //��ʽ����
//	return 0;
//}

////BվP10
////дһ��������ÿ��������������ͻὫnum��ֵ+1
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num); //Ҫ��Add�����в����ı�num��ֵ��Ҫ����ַ��ȥ
//	printf("num = %d\n",num); //1
//	Add(&num);
//	printf("num = %d\n", num); //2
//	Add(&num);
//	printf("num = %d\n", num); //3
//	return 0;
//}


////BվP10
////дһ��������ʵ��������������Ķ��ֲ���
////����ҵ��˷����±꣬�Ҳ�������-1
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}

////BվP10
////дһ������·�ж�һ���ǲ�������
////�����귵��1�����Ƿ���0
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0; //ע�ⲻҪ�ں������ӡ
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


////BվP10
////дһ������·�ж�һ�����ǲ�������
//
////����������1��������������0
//int is_prime(int n)
//{
//	int a = 0;
//	for (a = 2; a <= n - 1; a++) //�˴������Ż���a<=sqrt(n)��ͷ�ļ���include<math.h>
//	{
//		if (n % a == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1) //ע��������ε��õĺ���
//			printf("%d ", i);
//	}
//	return 0;
//}


////дһ�����������������ε�����
////��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ���������βε��޸��ǲ���ı�ʵ�ε�
//void Swap(int* pa, int* pb) //ʹ��pa,pb����ָ����н���
//{
//	int tmp = 0;
//	tmp = *pa; //*pa���������a
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	int* pb = &b;
//	Swap(&a, &b);   //��a��b�ĵ�ַ����Swap�������
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}


////дһ�����������������ε�����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


////BվP10
////дһ�����������ҵ��������еĽϴ�ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


////BվP10
////дһ�����������ҵ��������еĽϴ�ֵ���Լ�д�ģ�
//
//int bigger(int x , int y)
//{
//	if (x > y)
//		return x;
//	    //printf("%d",x);
//	else
//		return y;
//		//printf("%d", y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	bigger(a, b);
//	int big = bigger(a, b); //��bigger�����ķ���ֵ����big�����ٴ�ӡ������Ҳ����ֱ���ں����д�ӡ
//	printf("%d", big);
//	return 0;
//}



////BվP10
////����ʹ��memset����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}



////BվP10
////����ʹ��strlen����
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}



////BվP9
////go to ���
////һ���ػ�����
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 ��һ���ػ�����
//	//system()  ��ִ��ϵͳ����ģ����������Ҫ��˫����������
//	system("shutdown -s -t 30");
//again:
//	printf("��ע����ĵ�����30s�ڹػ���������룺��������ȡ���ػ�\n ������>:");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



////BվP9
////��������Ϸ//
//
//void menu() //void��������ֵΪ��
//{
//	printf("########################\n");
//	printf("#   1.play    0.exit   #\n");
//	printf("########################\n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//void game()
//{
//	//1.����һ���������rand()���������������
//	//2.������
//
//	int ret = 0;
//	int guess = 0;
//
//	//��ʱ�����������������������
//	//srand��������������ǻᱻ���úܶ�Σ�ʹ�����ɵ��������������ѡ��1��ʱ�����������һ�������������Է������棬����һ�ξͿ���
//
//	ret = rand()%100+1;//ԭ����ret = rand(),����0~32767֮�������̫�󣬹�ȡģ��1��ʹ������0~100֮�������
//	/*printf("%d\n", ret);*/
//	while (1)
//	{
//		printf("������֣�>");
//		scanf("%d", &guess);
//			if (guess > ret)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < ret)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("��ϲ�㣬�¶���\n");
//				break;
//			}
//	}
//}   
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL)); //time���������Σ�ǰ���������ǿ������ת����unsigned int
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();//��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		    break;
// 		}
//	} while (input); //case 1��default��Ҫ����ѭ������Ϊcase 0��ʱ��Ϊ�٣��˳���Ϸ
//	return 0;
//}