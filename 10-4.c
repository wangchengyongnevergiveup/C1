#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//fputs fgets 获取用户键盘输入，写入文件
//用户写入“:wq”终止接收用户输入，将之前的数据保存成一个文件
//int main()
//{
//	FILE* fp = fopen("test04.txt", "w");
//	if (fp == NULL)
//	{
//		return -1;
//	}
//	char buf[4096] = { 0 };
//	while (1)
//	{
//		fgets(buf, 4096, stdin);//abcd :wq
//		if (strcmp(buf, ":wq\n") == 0)
//		{
//			break;
//		}
//		fputs(buf, fp);
//	}
//	fclose(fp);
//
//	return 0;
//}