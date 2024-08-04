#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Çó·Ç¿Õ×Ö·û´®ÔªËØ¸öÊý
//int feikongstr(char* src)
//{
//	int count = 0;
//	char* p = src;
//	while (*p != 0)
//	{
//		if (*p != ' ')
//		{
//			count++;
//		}
//		p++;
//	}
//	return count;
//}
//
//// ×Ö·û´®ÄæÐò
//void nixustr(char* src)
//{
//	char* start = src;
//	char* end = src + strlen(src) - 1;
//	while (start < end)
//	{
//		char temp = *start;
//		*start = *end;
//		*end = temp;
//		start++;
//		end--;
//	}
//}
//
//// ÅÐ¶Ï»ØÎÄ×Ö·û´®   
//int huiwenstr(char* src)
//{
//	char* start = src;
//	char* end = src + strlen(src) - 1;
//	while (start < end)
//	{
//		if (*start != *end)
//		{
//			return 0;
//		}
//		start++;
//		end--;
//	}
//	return 1;
//}
//
//
//int main(int argc, char* argv[])
//{
//	char src[] = "hello world";
//	int ret = feikongstr(src);
//	printf("ret = %d\n", ret);//10
//
//	char src2[] = "hello";
//	nixustr(src2);
//	printf("src2 = %s\n", src2);//olleh
//
//	char src3[] = "abcddcba";
//	int ret2 = huiwenstr(src3);
//	printf("ret2 = %d\n", ret2);//ret2 = 1
//	char src4[] = "abcdefg";
//	int ret3 = huiwenstr(src4);
//	printf("ret3 = %d\n", ret3);//ret3 = 0
//
//	return 0;
//}