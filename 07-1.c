#include <stdio.h>
#include <stdlib.h>

//传值和传址
//void swap1(int x, int y)
//{
//	int temp; temp = x; x = y; y = temp;
//	printf("x = %d ,y = %d\n", x, y);//x = 5 ,y = 3
//}
//
//void swap2(int* x, int* y)
//{
//	int temp; temp = *x; *x = *y; *y = temp;
//}
//
//int main()
//{
//	int x = 3; int y = 5;
//	//swap1(3, 5);
//	printf("x = %d ,y = %d\n", x, y);//x = 3 ,y = 5
//
//	swap2(&x, &y);
//	printf("x = %d ,y = %d\n", x, y);//x = 5 ,y = 3
//
//	return 0;
//}