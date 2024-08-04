#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//字符数组
//int main()
//{
//	//char arr1[5] = { 'h','e','l','l','o' };
//	//char arr2[ ] = { 'h','e','l','l','o','\0'};
//	//char arr3[] = "hello";
//	//printf("%s\n", arr1);//hello烫烫烫蘚d>$p䦶
//	//printf("%s\n", arr2);//hello
//	//printf("%s\n", arr3);//hello
//
//	//统计字符串中每个字符出现的次数
//	char str[11] = { 0 };
//	for (size_t i = 0; i < 10; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//
//	int count[26] = { 0 };//代表26个英文字母出现的次数。
//	for (size_t i = 0; i < 11; i++)
//	{
//		int index = str[i] - 'a';//用户输入的字符在 count数组中的下标值  26个英文字母 a-z  a:97 d:100   'd' - 'a' =3  d的下标
//		count[index]++;
//	}
//	for (size_t i = 0; i < 26; i++)
//	{
//		if (count[i] != 0)
//		{
//			printf("%c字符在字符串中出现%d次\n", 'a' + i, count[i]);
//		}
//	}
//
//	return 0;
//}