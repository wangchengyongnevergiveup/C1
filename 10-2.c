#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

////�ļ���д����
//int main()
//{
//	//���ַ�д�ļ�fputc
//	char* filename = "test02.txt";
//	int ret = 0;
//	FILE* fp = fopen(filename, "w");
//	if (fp == NULL)
//	{
//		return -1;
//	}
//	char ch = 'a';
//	while (ch <= 'z')
//	{
//		ret = fputc(ch, fp);
//		if (ret == -1)
//		{
//			return -1;
//		}
//		ch++;
//	}
//	fclose(fp);
//
//	//���ַ����ļ� fgetc
//	char ch1 = 0;
//	FILE* fp2 = fopen("test02.txt", "r");
//	if (fp2 == NULL)
//	{
//		return -1;
//	}
//	while (1)
//	{
//		ch1 = fgetc(fp2);
//		if (ch1 == EOF)
//		{
//			break;
//		}
//		printf("%c\n", ch1);
//	}
//	fclose(fp2);
//
//	return 0;
//
//}

