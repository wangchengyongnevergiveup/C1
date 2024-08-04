#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//缓冲区 fflush 成功返回0
int main()
{
	FILE* fp = fopen("test2-07.txt", "w+");
	if (!fp)
	{
		return -1;
	}
	char m = 0;
	while (1)
	{
		scanf("%c", &m);
		if (m == ':')
		{
			break;
		}
		fputc(m, fp);
		fflush(fp);  // 手动刷新文件缓冲到物理磁盘。
	}
	// 当文件关闭时，会自动刷新缓冲区。
	fclose(fp);

	return 0;
}