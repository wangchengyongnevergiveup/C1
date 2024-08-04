#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文件练习

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
//		sscanf(buf, "%d%c%d=\n", &a, &ch, &b);	// a：10， ch：'/' b: 2
//		sprintf(result, "%d%c%d=%d\n", a, ch, b, calc(ch, a, b));  // 10 / 2 = 5;
//		strcat(sum_res, result);
//	}
//	fclose(fp);  // 将只有表达式没有结果的文件关闭。
//	fp = fopen("test05.txt", "w");	// 清空 只有表达式没有结果的文件
//	if (fp == NULL)
//	{
//		return ;
//	}
//	fputs(sum_res, fp);	// 将既有表达式又有结果的字符串写到文件中。
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