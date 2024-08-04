#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//feof()函数
//void write_file()
//{
//	FILE* fp = fopen("test03.txt", "w");
//	if (fp == NULL)
//	{
//		return -1;
//	}
//	fputc('a', fp);
//	fputc('b', fp);
//	fputc('c', fp);
//	fputc('d', fp);
//	fclose(fp);
//}
//
//void read_file()
//{
//	char ch = 0;
//	FILE* fp = fopen("test03.txt", "r");
//	if (fp == NULL)
//	{
//		return -1;
//	}
//	while (1)
//	{
//		ch = fgetc(fp);
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("%c\n", ch);
//	}
//	fclose(fp);
//}
//void test_feof()
//{
//	FILE* fp = fopen("test03.txt", "r");
//	if (fp == NULL)
//	{
//		return -1;
//	}
//	while (1)
//	{
//		printf("没有到达文件结尾\n");
//		fgetc(fp);		// 一次读一个字符，读到字符直接丢弃。
//		if (feof(fp))
//		{
//			break;
//		}
//	}
//	fclose(fp);
//}
//
//int main()
//{
//	write_file();
//	//read_file();
//	test_feof();
//
//	return 0;
//}