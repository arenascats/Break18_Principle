// The'BreakOne'.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
#define �� ;
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
{//����һ����ͨ�ĵǼ��û����ϣ������ǵ�һ�˳Ƶڶ��˳ƻ��ǵ����˳Ƶĳ��򣬺��ж�д�ļ�������Ϊcsv�ĵ��Ĳ���

	//1.�����������ֻ�û������ok�Ļ���ֱ�ӽ�������
	
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
			SaveNameToFile();//2.����ԭ�� ��
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
			SaveNameToFile();//2.����ԭ�� ����
			fp << YourName;
			fp.close();
			return 0;
		}
		system("pause");
	//thr end of 1.
	

}



//1.DRYԭ��
//��Ҫ�ظ���Don��t repeat yourself���������������һ���������ԭ�����Ҫ�����ظ���
//����̽ṹ������ѭ������������ȣ��Ĵ��ھ���Ϊ�˱����ظ���
//һ���ظ������磬һ�������ʽ��һϵ����䣬��ͬ�ĸ���Ļ����ͻᴴ��һ���µĳ���




/*3.KISS��Keep it simple, stupid!��ԭ�� 
�������ԣ����⸴���ԣ�Ӧ����Զ������һ����Ҫ��Ŀ�ꡣ
  д�򵥵Ĵ��룬�������ѵ�ʱ���٣������٣������޸�����Ҳ���ס�*/

/*4.���ⴴ��YAGNI��You aren��t going to need it��ԭ��
����ֻ�е�����Ҫ��ʱ���ȥ��Ӷ���Ĺ��ܣ�����Ҫ�Ͳ�Ҫ�������㡣*/