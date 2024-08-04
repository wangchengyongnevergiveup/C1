#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int main(int argc,char* argv[])
//{
	//×Ö·û´®·Ö¸î
	//char str[] = "www.itcast.cn.com.net";
	//char* p = strtok(str, ".");
	//printf("%s\n", p);//www
	//while (p != NULL)
	//{
	//	p= strtok(NULL, ".");
	//	printf("%s ", p);//itcast cn com net (null)
	//}
	//putchar('\n');
	//char str1[] = "www.itcast.cn$This is a test$strtok";
	//char* p1 = strtok(str1, ".$");
	//printf("%s\n", p1);//www
	//while (p1 != NULL)
	//{
	//	p1 = strtok(NULL, ".$");
	//	printf("%s ", p1);//itcast cn This is a test strtok (null)
	//}

	//×Ö·û´®×ª»»  Ô­´®±ØÐëÊÇ¿É×ª»»µÄ×Ö·û´®   atoi atof atol
	//char str[] = "abc123";
	//printf("%d\n", atoi(str));//0
	//char str1[] = "123abc";
	//printf("%d\n", atoi(str1));//123
	//char str2[] = "12abc3";
	//printf("%d\n", atoi(str2));//12


//	char a[] = "-1";
//	printf("%d\n", atoi(a));//-1
//
//	char* b = "3.141";
//	printf("%.3f\n", atof(b));//3.141
//
//	char c[] = "123";
//	printf("%ld\n", atol(c));//123
//
//	return 0;
//}