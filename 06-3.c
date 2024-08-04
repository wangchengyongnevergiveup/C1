#include <stdio.h>
#include <stdlib.h>

//野指针、空指针和万能指针
//int main()
//{
	//没有一个有效的地址空间
	//int* p;//地址是随机数 不能随便使用
	//*p = 2000;
	//printf("*p = %d\n", *p);

	//不是可访问的内存区域
	//int* p = 100;//0-255 是留给操作系统的
	//printf("*p = %d\n", *p);

	//空指针
	/*int* p = NULL;
	if (p != NULL)
	{
		*p = 10;
		printf("*p = %d\n", *p);
	}*/

	//万能指针
	/*char ch = 'a';
	void* p;
	p = &ch;
	printf("%c\n", *(char*)p);

	return 0;
}*/