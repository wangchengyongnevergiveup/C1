#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//�ļ���ϰ

//void write_file()
//{
//	FILE* fp = fopen("test05.txt", "w");
//	if (fp == NULL)
//	{
//		return ;
//	}
//	fputs("10+2=\n", fp);
//	fputs("10-2=\n", fp);
//	fputs("10/2=\n", fp);
//	fputs("10*2=\n", fp);
//	fclose(fp);
//}
//
//int calc(char ch, int a, int b)
//{
//	switch (ch)
//	{
//	case '+':
//		return a + b;
//	case '-':
//		return a - b;
//	case '/':
//		return a / b;
//	case '*':
//		return a * b;
//	default:
//		break;
//	}
//}
//
//void read_file()
//{
//	char buf[4096] = { 0 };
//	char result[4096] = { 0 };
//	char sum_res[4096] = { 0 };
//	int a, b;
//	char ch;
//	FILE* fp = fopen("test05.txt", "r");
//	if (fp == NULL)
//	{
//		return ;
//	}
//	while (1)
//	{
//		fgets(buf, 4096, fp);  
//		if (feof(fp))
//		{
//			break;
//		}
//		sscanf(buf, "%d%c%d=\n", &a, &ch, &b);	// a��10�� ch��'/' b: 2
//		sprintf(result, "%d%c%d=%d\n", a, ch, b, calc(ch, a, b));  // 10 / 2 = 5;
//		strcat(sum_res, result);
//	}
//	fclose(fp);  // ��ֻ�б��ʽû�н�����ļ��رա�
//	fp = fopen("test05.txt", "w");	// ��� ֻ�б��ʽû�н�����ļ�
//	if (fp == NULL)
//	{
//		return ;
//	}
//	fputs(sum_res, fp);	// �����б��ʽ���н�����ַ���д���ļ��С�
//	fclose(fp);
//}
//
//int main()
//{
//	write_file();
//
//	getchar();
//
//	read_file();
//
//	return 0;
//}