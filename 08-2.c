#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//字符串处理函数
//int main(int argc, char* argv[])
//{
	////字符串拷贝  保证 dest 空间足够大
	//char src[] = "hello world";

	////char dest1[10] = { 0 };//strcpy不安全
	//char dest1[100] = { 0 };
	//char* p1 = strcpy(dest1, src);
	//printf("dest1 = %s\n", dest1);
	//printf("p1 = %s\n", p1);
	//
	//char dest2[100] = { 0 };
	//char* p2 = strncpy(dest2, src, sizeof(dest2));
	//printf("dest2 = %s\n", dest2);
	//printf("p2 = %s\n", p2);

	//字符串拼接  必须保证 dest 空间足够大
	/*char src1[100] = "hello";
	char src2[] = "world";*/
	
	//char* p = strcat(src1, src2);
	//printf("src1 = %s\n", src1);//src1 = helloworld
	//printf("p = %s\n", p);//p = helloworld

	//char* p1 = strncat(src1, src2, 3);
	//printf("src1 = %s\n", src1);//src1 = hellowor
	//printf("p1 = %s\n", p1);//p1 =hellowor

	//字符串比较 strcmp strncmp

	//字符串格式化输入、输出  sscanf() sprintf()
	
	//int a, b, c;
	//char str[] = "1+2=3";
	//sscanf(str, "%d+%d=%d", &a, &b, &c);
	//printf("a = %d\n", a);//1
	//printf("b = %d\n", b);//2
	//printf("c = %d\n", c);//3

//	char str[100];
//	sprintf(str, "%d+%d=%d\n", 1, 2, 3);
//	printf("str = %s\n", str);//str = 1+2=3
//
//
//	return 0;
//
//}