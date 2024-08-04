#include <stdio.h>
#include <stdlib.h>

//Ö¸ÕëÓë×Ö·û´®
//×Ö·û´®±È½Ï
//int mystrcmp(char* str1, char* str2)
//{
//	/*int i = 0;
//	while (str1[i] == str2[i])
//	{
//		if (str1[i] = 0)
//		{
//			return 0;
//		}
//		i++;
//	}
//	return str1[i] > str2[i] ? 1 : -1;*/
//	
//	while (*str1 == *str2)
//	{
//		if (*str1 == 0)
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 > *str2 ? 1 : -1;
//}
//
////×Ö·û´®¿½±´
//void mystrcpy(char* src, char* dest)
//{
//	/*int i = 0;
//	while (src[i] != 0)
//	{
//		dest[i] = src[i];
//		i++;
//	}
//	dest[i] = '\0';*/
//	while (*src != 0)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//}
//
////×Ö·û´®ÖÐ²éÕÒ×Ö·û³öÏÖµÄÎ»ÖÃ
//char* mystrch(char* src, char ch)
//{
//	/*int i = 0;
//	while (src[i] != 0)
//	{
//		if (src[i] == ch)
//		{
//			return &str[i];
//		}
//		i++;
//	}
//	return 0;*/
//
//	while (*src != 0)
//	{
//		if (*src == ch)
//		{
//			return src;
//		}
//		src++;
//	}
//	return 0;
//}
//
////×Ö·û´®È¥¿Õ¸ñ
//void qukongge(char* src, char* dest)
//{
//	/*int i, j = 0;
//	while (src[i] != 0)
//	{
//		if (src[i] != " ")
//		{
//			dest[j] = src[i];
//			j++;
//		}
//		i++;
//	}
//	dest[j] = '\0';*/
//
//	while (*src != 0)
//	{
//		if (*src != ' ')
//		{
//			*dest = *src;
//			dest++;
//		}
//		src++;
//	}
//	*dest = '\0';
//}
//
//int main()
//{
//	char str1[] = "hello";
//	char str2[] = "hellp";
//	int ret1 = mystrcmp(str1, str2);
//	printf("ret = %d\n", ret1);//-1
//
//	char src1[] = "hello";
//	char dest[20] = { 0 };
//	mystrcpy(src1, dest);
//	printf("dest = %s\n", dest);//hello
//
//	char src2[] = "hello world";
//	char ch = ' ';
//	char* ret2 = mystrch(src2, ch);
//	printf("ret2 = %s\n", ret2);// world
//
//	char src3[] = "hello world";
//	char dest2[20] = { 0 };
//	qukongge(src3, dest2);
//	printf("dest2 = %s\n", dest2);//helloworld
//
//	return 0;
//}