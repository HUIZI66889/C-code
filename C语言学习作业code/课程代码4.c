#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////BվP27
////ģʽʵ��strlen
//int my_strlen(const char *str)
//{
//	int count = 0;
//	arrert(str != NULL); //����ָ�룬��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


////BվP27
////ģ��ʵ�ֿ⺯��strcpy(�Ż�)
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src) //*src�����޸ģ��޸Ļᱨ��
//{
//	char* ret = dest;
//	assert(dest !=NULL);//���Ժ���
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����\0�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret; //����Ŀ�ĵص���ʼ��ַ
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


////BվP27
////ģ��ʵ�ֿ⺯��strcpy(�Ż�)
//void my_strcpy(char* dest, char* src) 
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////BվP27
////ģ��ʵ�ֿ⺯��strcpy
//void my_strcpy(char* dest, char* src) 
//{
//	while (*src != '\0')
//	{
//		*dest = *src;//�Ż���ɾ���������У����л���  *dest++=*src++
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}
//int main()
//{
//	char arr1[] = "###############";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


////BվP27
////���Խ����ѭ����ԭ��
////��ͬ������Խ���λ�ò�ͬ
////���i��arr����˳��󲻻���ѭ��������д�ź����
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0; //�Ƿ�����arr[10]��arr[11]��arr[12]�����ĳ���0
//	//arr[10]��arr[11]Ϊ���ֵ������arr[12]��12���ҽ�arr[12]��Ϊ0��i���0�ٴν���ѭ��
//	//��arr[12]��i��ͬһ�ռ��ʱ����������ͬʱ�䣬�ڼ��Ӵ�����ȡ��ַ����ֵ���ֵ�ַһ��
//	//
//	}
//	system("pause");
//	return 0;
//}


////BվP27
////���Խ����ѭ����ԭ��
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}


////BվP27
////���������޸ĺ�Ľ��
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


////BվP27
////���Ե����������
////���öϵ��������3==i��
//int main()
//{
//	int i = 0;
//	int sum = 0;//�������ս��
//	int n = 0;
//	int ret = 1;//����n�Ľ׳�
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}