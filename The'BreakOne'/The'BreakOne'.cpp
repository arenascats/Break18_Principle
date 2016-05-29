// The'BreakOne'.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

char 
char  YourName[MaxNum];
int main()
{
	printf("Is a test");
    return 0;
	getchar();
}


//1.DRY原则
//不要重复（Don’t repeat yourself）——程序设计中一个最根本的原则就是要避免重复。
//许多编程结构（比如循环、函数、类等）的存在就是为了避免重复。
//一旦重复（例如，一个长表达式，一系列语句，相同的概念）的话，就会创建一个新的抽象。
void IcanNamedOne()
{
	printf("Please enter your name");
	scanf("%s", YourName);
}

