#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//BվP26
//�ṹ�������������һ��ѧ�����ͣ�
//����һ��ѧ��-��ҪһЩ���ݣ����ڴ���������֡����䡢�绰���Ա�
//struct�ǽṹ��ؼ��֣�Stu�ǽṹ���ǩ��struct Stu�ǽṹ������
struct Stu
{
	//��Ա����
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};
int main()
{
	//�����Ĵ���
	struct Stu s;//��Ϊstruct Stu�ǽṹ�����ͣ��ṹ�������������������ģ��ʴ���һ��s����
	return 0;
}
