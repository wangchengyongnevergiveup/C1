#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

////大文件拷贝
//void myfile_cp()
//{
//	//FILE* rfp = fopen("D:\\codezhuanyong\\fuxi\\C\\C1\\test1.png", "rb");
//	//FILE* wfp = fopen("D:\\codezhuanyong\\fuxi\\C\\C1\\mycopy.png", "wb");
//	FILE* rfp = fopen("D:/codezhuanyong/fuxi/C/C1/test1.png", "rb");
//	FILE* wfp = fopen("D:/codezhuanyong/fuxi/C/C1/mycopy.png", "wb");
//	char buf[4096] = { 0 };  // 缓冲区
//	int ret = 0;
//	while (1)
//	{
//		memset(buf, 0, sizeof(buf));
//		ret = fread(buf, 1, sizeof(buf), rfp);
//		if (ret == 0)
//		{
//			break;
//		}
//		printf("ret = %d\n", ret);
//		fwrite(buf, 1, ret, wfp);
//	}
//	fclose(wfp);
//	fclose(rfp);
//}
//int main()
//{
//	myfile_cp();
//
//	return 0;
//}