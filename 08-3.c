#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////�ַ��������ַ�
//char* my_strchr(char* str, char ch)
//{
//	/*int i = 0;
//	while (str[i])		
//	{
//		if (str[i] == ch)
//			return &str[i];
//		i++;
//	}
//	return NULL;*/
//
//	while (*str)
//	{
//		if (*str == ch)
//			return str;
//		str++;
//	}
//	return NULL;
//}
//
////�ַ��������Ӵ� 
//char* mystrstr(char* str, char* substr)
//{
//	char* ps = str;
//	char* temp = str;
//	char* pb = substr;
//	while (*ps != 0)
//	{
//		temp = ps;
//		while ((*ps == *pb) && (*pb != 0))
//		{
//			ps++;
//			pb++;
//		}
//		if (*pb == 0)
//		{
//			return temp;
//		}
//		pb = substr;
//		ps = temp;
//		ps++;
//	}
//	return NULL;
//}
//
////�ַ���������
//int main(int argc, char* argv[])
//{
//	//�ַ��������ַ� strrchr
//	//printf("%s\n", strrchr("hehehello", 'l'));//lo  ��������
//
//	//char src[] = "hehehello";
//	//char ch = 'l';
//	//char* p = my_strchr(src, ch);
//	//printf("%s\n", p);//llo
//
//	//�ַ��������Ӵ� strstr
//	//printf("%s\n", strstr("hehehello", "llo"));//llo
//
//	//char src[] = "hehehello";
//	//char substr[] = "he";
//	//char* p = mystrstr(src, substr);
//	//printf("%s\n", p);//llo
//
//	return 0;
//}