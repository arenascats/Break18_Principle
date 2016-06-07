// The'BreakOne'.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
#define ； ;
#define ERROR 1
#define SUCCEED 0
string  YourName;
string Okline;
fstream fp;
int SaveNameToFile(void);
int disHowManyMemoryInUse();


int SaveNameToFile()
{

	char buff[10];
	fp.open("test.txt", fstream::in | fstream::out | fstream::app);
	fp.seekg(0, ios::end);
	cout << "Enter 12 or 15 ..." << endl;
	cin >> buff;

	return 0;
}
int disHowManyMemoryInUse()//4.Break YAGNI Principle
{
	int DIV = 1024;
	int WIDTH = 7;
	MEMORYSTATUSEX statex;
	statex.dwLength = sizeof(statex);

	GlobalMemoryStatusEx(&statex);

	_tprintf(TEXT("There is %*ld percent of memory in use.\n"),
		WIDTH, statex.dwMemoryLoad);
	return 0;
}
int main()
{//这是一个普通的登记用户资料，包括是第一人称第二人称还是第三人称的程序，含有读写文件，保存为csv文档的操作

	//1.输入三次名字还没有输入ok的话就直接结束程序
	
	disHowManyMemoryInUse();
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout<<YourName;
		printf("\nIf sure, type ok:");
		std::cin>> Okline;
		//3.Judge sign error
		if ( Okline[0] == '/') return ERROR;
		if (Okline[1] == '/') return ERROR;
		if (Okline[0] == '!') return ERROR;
		if (Okline[1] == '!') return ERROR;
		if (Okline[0] == '@') return ERROR;
		if (Okline[1] == '@') return ERROR;
		if (Okline[0] == '#') return ERROR;
		if (Okline[1] == '#') return ERROR;
		if (Okline[1] == '$') return ERROR;
		if (Okline[0] == '%') return ERROR;
		if (Okline[1] == '^') return ERROR;
		if (Okline[0] == '*') return ERROR;
		if (Okline[1] == '(') return ERROR;
		if (Okline[1] == ')') return ERROR;
		if (Okline[0] == '=') return ERROR;
		if (Okline[0] == '[') return ERROR;
		if (Okline[0] == ']') return ERROR;
		if (Okline[0] == '+') return ERROR;
		if (Okline[1] == '=') return ERROR;
		if (Okline[1] == '[') return ERROR;
		if (Okline[1] == ']') return ERROR;
		if (Okline[1] == '+') return ERROR;
		if (Okline == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			SaveNameToFile();
			fp << YourName;
			fp.close();
			return 0;
		}
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout << YourName;
		printf("\nIf sure, type ok:");
		std::cin >> Okline;

		//3.Judge sign error
		if (Okline[0] == '/') return ERROR;
		if (Okline[1] == '/') return ERROR;
		if (Okline[0] == '!') return ERROR;
		if (Okline[1] == '!') return ERROR;
		if (Okline[0] == '@') return ERROR;
		if (Okline[1] == '@') return ERROR;
		if (Okline[0] == '#') return ERROR;
		if (Okline[1] == '#') return ERROR;
		if (Okline[1] == '$') return ERROR;
		if (Okline[0] == '%') return ERROR;
		if (Okline[1] == '^') return ERROR;
		if (Okline[0] == '*') return ERROR;
		if (Okline[1] == '(') return ERROR;
		if (Okline[1] == ')') return ERROR;
		if (Okline[0] == '=') return ERROR;
		if (Okline[0] == '[') return ERROR;
		if (Okline[0] == ']') return ERROR;
		if (Okline[0] == '+') return ERROR;
		if (Okline[1] == '=') return ERROR;
		if (Okline[1] == '[') return ERROR;
		if (Okline[1] == ']') return ERROR;
		if (Okline[1] == '+') return ERROR;


		if (Okline == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			SaveNameToFile();//2.抽象原则 　
			fp << YourName;
			fp.close();
			return 0;
		}
		
		printf("Please enter your name and type ok:");
		std::cin >> YourName;
		printf("\nYour name is:");
		cout << YourName;
		printf("\nIf sure, type ok:");
		std::cin >> Okline;
		//3.Judge sign error
		if (Okline[0] == '/') return ERROR;
		if (Okline[1] == '/') return ERROR;
		if (Okline[0] == '!') return ERROR;
		if (Okline[1] == '!') return ERROR;
		if (Okline[0] == '@') return ERROR;
		if (Okline[1] == '@') return ERROR;
		if (Okline[0] == '#') return ERROR;
		if (Okline[1] == '#') return ERROR;
		if (Okline[1] == '$') return ERROR;
		if (Okline[0] == '%') return ERROR;
		if (Okline[1] == '^') return ERROR;
		if (Okline[0] == '*') return ERROR;
		if (Okline[1] == '(') return ERROR;
		if (Okline[1] == ')') return ERROR;
		if (Okline[0] == '=') return ERROR;
		if (Okline[0] == '[') return ERROR;
		if (Okline[0] == ']') return ERROR;
		if (Okline[0] == '+') return ERROR;
		if (Okline[1] == '=') return ERROR;
		if (Okline[1] == '[') return ERROR;
		if (Okline[1] == ']') return ERROR;
		if (Okline[1] == '+') return ERROR;
		if (Okline == "ok")
		{
			cout << endl << "You ok,Im ok too :>";
			system("pause");
			SaveNameToFile();//2.抽象原则 　　
			fp << YourName;
			fp.close();
			return 0;
		}
		system("pause");
	//thr end of 1.
	

}



//1.DRY原则
//不要重复（Don’t repeat yourself）——程序设计中一个最根本的原则就是要避免重复。
//许多编程结构（比如循环、函数、类等）的存在就是为了避免重复。
//一旦重复（例如，一个长表达式，一系列语句，相同的概念）的话，就会创建一个新的抽象。




/*3.KISS（Keep it simple, stupid!）原则 
　　简单性（避免复杂性）应该永远当作是一个重要的目标。
  写简单的代码，不但花费的时间少，错误少，而且修改起来也容易。*/

/*4.避免创建YAGNI（You aren’t going to need it）原则
　　只有当你需要的时候才去添加额外的功能，不需要就不要画蛇添足。*/