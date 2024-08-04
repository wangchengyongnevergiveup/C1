#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文件的随机读写
//int main()
//{
//	//fputs  成功： 0    fgets()  成功： 读到的字符串
//	FILE* fp = fopen("test2-06.txt", "w+");
//	int ret = fputs("11111", fp);
//	//printf("ret 1 = %d\n", ret);//0
//	ret = fputs("22222", fp);
//	//printf("ret 2 = %d\n", ret);//0
//	ret = fputs("33333", fp);
//	//printf("ret 3 = %d\n", ret);//0
//
//	char buf[1024] = { 0 };
//	rewind(fp);
//	char* ptr = fgets(buf, 1024, fp);
//	if (ptr == NULL)
//	{
//		return -1;
//	}
//	printf("fgets ptr = %s\n", ptr);//111112222233333
//	printf("buf = %s\n", buf);//111112222233333
//
//	fseek(fp, 0, SEEK_CUR);
//	ret = fputs("44444", fp);
//	printf("ret = %d\n", ret);//0
//	rewind(fp);
//	ptr = fgets(buf, 1024, fp);
//	printf("fgets ptr = %s\n", ptr);//11111222223333344444
//
//	fclose(fp);
//
//	return 0;
//}