#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/stat.h>

////获取文件状态 删除和重命名文件
//int main()
//{
//	//stat 成功： 0
//	struct stat buf;
//	int ret = stat("test2-06.txt", &buf);
//	printf("文件大小：%d\n", buf.st_size);//20
//
//	//int remove(const char* pathname);
//	//int rename(const char *oldpath, const char *newpath);
//	return 0;
//}