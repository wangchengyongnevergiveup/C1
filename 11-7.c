#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>

////��ȡ�ļ�״̬ ɾ�����������ļ�
//int main()
//{
//	//stat �ɹ��� 0
//	struct stat buf;
//	int ret = stat("test2-06.txt", &buf);
//	printf("�ļ���С��%d\n", buf.st_size);//20
//
//	//int remove(const char* pathname);
//	//int rename(const char *oldpath, const char *newpath);
//	return 0;
//}