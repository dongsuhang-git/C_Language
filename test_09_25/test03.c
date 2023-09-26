#define _CRT_SECURE_NO_WARNINGS 1

//define 定义标识符常量
#define MAX 1000;

//define 定义宏
#define ADD(x,y) ((x) + (y))


#include<stdio.h>




int main() {

	int maxs = MAX;
	printf("%d\n", maxs);
	int sum = ADD(1, 2);
	printf("%d\n", sum);

 
	//typedef  给数据类型起别名


	return 0;

}