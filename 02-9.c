#include <stdio.h>
#include <stdlib.h>

//数据溢出
//int main()
//{
//	char ch = 127 + 1;
//	//0111 1111 + 0000 0001   =====  1000 0000 人为规定-128
//	printf("ch = %d\n", ch);//-128
//
//	char ch2 = 127 + 2;
//	//0111 1111 + 0000 0010  =====  1000 0001(补码)  ---1000 0000(减1) ---1111 1111(取反) --- = -127
//	printf("ch = %d\n", ch2);//-127
//
//	unsigned char ch3 = 255 + 1;
//	//+1后 10000 0000  最高位的溢出 结果为0000 0000，十进制为0
//	printf("ch = %u\n", ch3);//0
//
//	unsigned char ch4 = 255 + 2;
//	//1111 1111 + 0000 0010 =  10000 0001 最高位的溢出，结果为0000 0001 十进制为1
//	printf("ch = %u\n", ch4);//1
//
//	system("pause");
//	return 0;
//
//}