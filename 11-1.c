#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//fprintf  fscanf
//void write_file()
//{
//	FILE* fp = fopen("test2-01.txt", "w");
//	if (!fp)  
//	{
//		return ;
//	}
//	fprintf(fp, "%d\n", 1);
//	fprintf(fp, "%d\n", 2);
//	fprintf(fp, "%d\n", 3);
//	fclose(fp);
//}
//
//void read_file()
//{
//	//fscanf
//	int a;
//	FILE* fp = fopen("test2-01.txt", "r");
//	if (!fp) 
//	{
//		return ;
//	}
//	while (1)
//	{
//		fscanf(fp, "%d\n", &a);  //��
//		printf("%d\n", a);
//		if (feof(fp))		//�ļ���β
//			break;
//	}
//	fclose(fp);
//}
//
//void read_file2()
//{
//	//fgets
//	char buf[1024];
//	FILE* fp = fopen("test2-01.txt", "r");
//	if (!fp) 
//	{
//		return ;
//	}
//	while (1)
//	{
//		memset(buf, 0, 1024);
//		fgets(buf, 1024, fp);//��\n
//		if (feof(fp))		//�ļ���β
//			break;
//		printf("%d\n", buf[0]);//��ʾ�ַ���ASCII��
//	}
//	fclose(fp);
//}
//
//int main()
//{
//	//write_file();
//	//read_file();//1 2 3
//	//read_file2();//49 50 51
//
//	FILE* fp = fopen("test2-01.txt", "r");
//	if (!fp)  
//	{
//		return -1;
//	}
//	int a; char ch; char str[10];
//	int ret = fscanf(fp, "%d %c %s", &a, &ch, str);//���ļ��������
//	printf("ret = %d\n", ret);//3  �ɹ�����ȷƥ��ĸ���
//	printf("a = %d\n", a);//1
//	printf("ch = %c\n", ch);//2
//	printf("str = %s\n", str);//3
//	
//	fclose(fp);
//	return 0;
//}
