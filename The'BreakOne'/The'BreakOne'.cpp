// The'BreakOne'.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;
#define ； ;
string  YourName;
string OkLine;
int main()
{//这是一个普通的登记用户资料，包括是第一人称第二人称还是第三人称的程序，含有读写文件，保存为csv文档的操作

	//1.输入三次名字还没有输入ok的话就直接结束程序
	
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout<<YourName;
		printf("\nIf sure, type ok:");
		std::cin >> OkLine;
		if (OkLine == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			return 0;
		}
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout << YourName;
		printf("\nIf sure, type ok:");
		std::cin >> OkLine;
		if (OkLine == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			return 0;
		}
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout << YourName;
		printf("\nIf sure, type ok:");
		std::cin >> OkLine;
		if (OkLine == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			return 0;
		}
		system("pause");
	//thr end of 1.
	

}


//1.DRY原则
//不要重复（Don’t repeat yourself）——程序设计中一个最根本的原则就是要避免重复。
//许多编程结构（比如循环、函数、类等）的存在就是为了避免重复。
//一旦重复（例如，一个长表达式，一系列语句，相同的概念）的话，就会创建一个新的抽象。


