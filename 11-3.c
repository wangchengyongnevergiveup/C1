#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//fwrite() fread() 既可以处理二进制文件也可以处理文本文件

//typedef struct student {
//	int age;
//	char name[10];
//	int num;
//} stu_t;
//
//void write_struct()
//{
//	stu_t stu[4] = {
//		10, "aaaa", 10,
//		20, "bbbb", 20,
//		30, "cccc", 30,
//		40, "dddd", 40
//	};
//	FILE* fp = fopen("test2-03.txt", "w");
//	if (!fp)
//	{
//		return ;
//	}
//	int ret = fwrite(&stu[0], 1, sizeof(stu_t) * 4, fp);
//	if (ret == 0)
//	{
//		return ;
//	}
//	//printf("ret = %d\n", ret);//80
//	fclose(fp);
//}
//
//void read_struct()
//{
//	//一次读一个元素。
//	FILE* fp = fopen("test2-03.txt", "r");
//	if (!fp)
//	{
//		return ;
//	}
//	stu_t s1;
//	int ret = fread(&s1, 1, sizeof(stu_t), fp);
//	printf("ret = %d\n", ret);//20
//	printf("age = %d, name=%s, num = %d\n", s1.age, s1.name, s1.num);//10 aaaa 10
//	fclose(fp);
//}
//
//void read_struct2()
//{
//	//读所有元素
//	FILE* fp = fopen("test2-03.txt", "r");
//	if (!fp)
//	{
//		return ;
//	}
//	stu_t s1[10];  // stu_t *s1 = malloc(sizeof(stu_t) * 1024);
//	int i = 0;
//	while (1)
//	{
//		int ret = fread(&s1[i], 1, sizeof(stu_t), fp);
//		//if (ret == 0)		// 替代feof()函数来判断读到文件结尾。
//		if (feof(fp))
//		{
//			break;
//		}
//		printf("age = %d, name=%s, num = %d\n", s1[i].age, s1[i].name, s1[i].num);
//	}
//	fclose(fp);
//}
//
//int main()
//{
//	write_struct();
//	//read_struct();
//	read_struct2();
//
//	return 0;
//}