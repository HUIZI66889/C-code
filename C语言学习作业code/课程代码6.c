#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


////BվP26
////ѹջ����
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}

////BվP26
////����ַ����
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//void Print1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//int main()
//{
//	Stu s = {"����",40,"15598886688","��"};
//	//��ӡ�ṹ������
//	//���ε�ʱ����Դ�sҲ���Դ�&s
//	//Print2��Print1����һЩ��
//	Print1(s);
//	Print2(&s);
//	return 0;
//}


////BվP26
////�ṹ��������ṹ��
//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//int main()
//{
//	char arr[] = "hello bit\0";
//	struct T t = { "hehe",{100,'w',"hello world",3.14},arr};
//	printf("%s\n", t.ch);//hehe
//	printf("%s\n", t.s.arr);//hello world
//	printf("%lf\n", t.s.d);//3.14
//	printf("%s\n", t.pc);//hello bit
//	return 0;
//}


////BվP26
////�ṹ��д��
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	Stu s1 = {"����",20,"15249287076","��"};
//	struct Stu s2 = {"����",30,"15596668862","����"};
//	return 0;
//}


////BվP26
////�ṹ�������������һ��ѧ�����ͣ�
////����һ��ѧ��-��ҪһЩ���ݣ����ڴ���������֡����䡢�绰���Ա�
////struct�ǽṹ��ؼ��֣�Stu�ǽṹ���ǩ��struct Stu�ǽṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}; s1, s2, s3;//s1, s2, s3��3��ȫ�ֵĽṹ�����
//int main()
//{
//	//�����Ĵ���
//	struct Stu s;//��Ϊstruct Stu�ǽṹ�����ͣ��ṹ�������������������ģ��ʴ���һ��s�������ñ���Ϊ�ֲ�����
//	return 0;
//}

////��2�ֶ������͵ķ�ʽ
//typedef struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	//�����Ĵ���
//  struct Stu s1;//struct StuҲ����ʹ��
//	Stu s2;//StuҲ���Դ���s2��
//	return 0;
//}
