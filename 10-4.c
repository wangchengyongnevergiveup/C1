#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//fputs fgets ��ȡ�û��������룬д���ļ�
//�û�д�롰:wq����ֹ�����û����룬��֮ǰ�����ݱ����һ���ļ�
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