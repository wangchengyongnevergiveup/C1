#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//�ַ�����������
//int main()
//{
	//gets�����ַ��� ����������ո���ַ��� ����ȫ
	//char a[10];
	//gets(a);//hello world
	//printf("��ȡ���ַ���Ϊ��%s\n", a);//hello world ���� ����ȫ

	//fgets Ԥ�� \0 �Ĵ洢�ռ䡣�ռ��㹻�� \n, �ռ䲻������ \n 
	//char b[10];
	//fgets(b, sizeof(b), stdin);//hello world
	//printf("��ȡ���ַ���Ϊ��%s\n", b);//hello wor

	//puts
	//char c[] = "hello world";
	//int ret = puts(c);//hello world  ������Զ���� \n ���з�
	//printf("ret = %d\n", ret);//0  �ɹ����Ǹ��� 0 ʧ�ܣ� -1.

	//fputs
	//char d[]= "hello world";
	//int ret = fputs(d, stdout);//������
	//printf("ret = %d\n", ret);//0

	//strlen ��ȡ�ַ�������Ч���ȣ� ������\0
	//char e[] = "hello world";
	//printf("sizeof(e) = %u\n", sizeof(e));//12
	//printf("strlen(e) = %u\n", strlen(e));//11
	//char f[] = "hello\0world";
	//printf("sizeof(f) = %u\n", sizeof(f));//12
	//printf("strlen(f) = %u\n", strlen(f));//5

	//ʵ��strlen
	//char j[] = "hello world";
	//int i = 0;
	//while (j[i] != 0)
	//{
	//	i++;
	//}
	//printf("%d", i);//11

//	char k[] = "hello\0world";
//	int i = 0;
//	while (k[i++]);
//	printf("%d", i-1);//1
//
//	return 0;
//}