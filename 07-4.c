#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//str 中 substr 出现次数
//int str_times(char* src, char* substr)
//{
//	int count = 0;
//	char* p = strstr(src, substr);
//	while (p != 0)
//	{
//		count++;
//		p += strlen(substr);
//		p=strstr(p, substr);
//	}
//	return count;
//}
//
//int main()
//{
//	//char* ret = strstr("hellollollo", "llo");
//	//printf("ret = %s\n", ret);//llollollo
//
//	char src[] = "helloabclloxyzllo";
//	char substr[] = "llo";
//	int ret = str_times(src, substr);
//	printf("ret = %d\n", ret);//3
//
//	return 0;
//}