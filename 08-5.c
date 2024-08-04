#include <stdio.h>
#include <stdlib.h>

//static关键字
//static局部变量的生命周期和程序运行周期一样,作用域在定义的函数内有效
//void func1()
//{
//	int i = 0;
//	i++;
//	printf("i = %d\n", i);
//}
//
//void func2()
//{
//	//静态局部变量，没有赋值，系统赋值为0
//	static int a;
//	a++;
//	printf("i = %d\n", a);
//}
//
//int main(int argc, char argv[])
//{
//	func1();//1
//	func2();//1
//	func1();//1
//	func2();//2
//
//	return 0;
//}