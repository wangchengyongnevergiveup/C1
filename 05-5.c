#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//字符串操作函数
//int main()
//{
	//gets输入字符串 可以输入带空格的字符串 不安全
	//char a[10];
	//gets(a);//hello world
	//printf("获取的字符串为：%s\n", a);//hello world 崩溃 不安全

	//fgets 预留 \0 的存储空间。空间足够读 \n, 空间不足舍弃 \n 
	//char b[10];
	//fgets(b, sizeof(b), stdin);//hello world
	//printf("获取的字符串为：%s\n", b);//hello wor

	//puts
	//char c[] = "hello world";
	//int ret = puts(c);//hello world  输出会自动添加 \n 换行符
	//printf("ret = %d\n", ret);//0  成功：非负数 0 失败： -1.

	//fputs
	//char d[]= "hello world";
	//int ret = fputs(d, stdout);//不换行
	//printf("ret = %d\n", ret);//0

	//strlen 获取字符串的有效长度： 不包含\0
	//char e[] = "hello world";
	//printf("sizeof(e) = %u\n", sizeof(e));//12
	//printf("strlen(e) = %u\n", strlen(e));//11
	//char f[] = "hello\0world";
	//printf("sizeof(f) = %u\n", sizeof(f));//12
	//printf("strlen(f) = %u\n", strlen(f));//5

	//实现strlen
	//char j[] = "hello world";
	//int i = 0;
	//while (j[i] != 0)
	//{
	//	i++;
	//}
	//printf("%d", i);//11

//	char k[] = "hello\0world";
//	int i = 0;
//	while (k[i++]);
//	printf("%d", i-1);//1
//
//	return 0;
//}