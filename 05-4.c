#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//�ַ�����
//int main()
//{
//	//char arr1[5] = { 'h','e','l','l','o' };
//	//char arr2[ ] = { 'h','e','l','l','o','\0'};
//	//char arr3[] = "hello";
//	//printf("%s\n", arr1);//hello�������\d>$p��
//	//printf("%s\n", arr2);//hello
//	//printf("%s\n", arr3);//hello
//
//	//ͳ���ַ�����ÿ���ַ����ֵĴ���
//	char str[11] = { 0 };
//	for (size_t i = 0; i < 10; i++)
//	{
//		scanf("%c", &str[i]);
//	}
//
//	int count[26] = { 0 };//����26��Ӣ����ĸ���ֵĴ�����
//	for (size_t i = 0; i < 11; i++)
//	{
//		int index = str[i] - 'a';//�û�������ַ��� count�����е��±�ֵ  26��Ӣ����ĸ a-z  a:97 d:100   'd' - 'a' =3  d���±�
//		count[index]++;
//	}
//	for (size_t i = 0; i < 26; i++)
//	{
//		if (count[i] != 0)
//		{
//			printf("%c�ַ����ַ����г���%d��\n", 'a' + i, count[i]);
//		}
//	}
//
//	return 0;
//}