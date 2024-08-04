#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字
//int main()
//{
//	srand(time(NULL));//种随机数种子
//	int n = 0;
//	int num = rand() % 100;//生成随机数
//
//	for (;;)
//	{
//		scanf("%d", &n);
//		if (n > num)
//		{
//			printf("猜大了\n");
//		}
//		else if (n < num)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//	printf("正确数字为：%d\n", num);
//
//	return 0;
//}