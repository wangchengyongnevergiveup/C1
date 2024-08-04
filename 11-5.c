#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//文件的随机读写

//typedef struct student {
//	int age;
//	char name[10];
//	int num;
//} stu_t;
//
//
//int main()
//{
//	stu_t stu[4] = {10, "aaa", 10, 20, "bbb", 20, 30, "ccc", 30, 40, "ddd", 40};
//	stu_t s1;
//	FILE* fp = fopen("test2-05.txt", "wb+");
//	if (!fp)
//	{
//		return -1;
//	}
//	int ret = fwrite(&stu[0], 1, sizeof(stu), fp); 
//	//printf("ret = %d\n", ret);//80
//
//	fseek(fp, sizeof(stu_t) * 2, SEEK_SET);//从文件起始位置，向后偏移一个stu结构体
//	ret = fread(&s1, 1, sizeof(s1), fp);
//	printf("ret = %d\n", ret);//20
//	printf("1 age= %d, name=%s, num=%d\n", s1.age, s1.name, s1.num);//1 age= 30, name=ccc, num=30
//
//	int len = ftell(fp);//获取文件当前读写指针位置，到文件起始位置的偏移量
//	printf("len = %d\n", len); //len = 60
//
//	rewind(fp);	// 将文件读写指针回卷到起始
//	ret = fread(&s1, 1, sizeof(s1), fp);
//	printf("2 age= %d, name=%s, num=%d\n", s1.age, s1.name, s1.num);//2 age= 10, name=aaa, num=10
//
//	fseek(fp, 0, SEEK_END); //将文件读写指针放到文件结尾
//	len = ftell(fp);
//	printf("文件大小为：%d\n", len);//文件大小为：80
//
//	fclose(fp);
//
//	return 0;
//}