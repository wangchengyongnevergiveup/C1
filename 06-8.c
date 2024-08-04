#include <stdio.h>
#include <stdlib.h>
	
//多级指针 不能跳跃定义
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	//int*** ppp = &(&p);
//	int*** ppp = &pp;
//
//	
//	printf("***ppp = %d\n", ***ppp);//10
//	printf("**pp = %d\n", **pp);//10
//	printf("*p = %d\n", *p);//10
//	printf("a = %d\n", a);//10
//
//	return 0;
//}