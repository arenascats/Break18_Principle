// The'BreakOne'.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include<string>

using namespace std;
#define �� ;
string  YourName;
string OkLine;
int main()
{//����һ����ͨ�ĵǼ��û����ϣ������ǵ�һ�˳Ƶڶ��˳ƻ��ǵ����˳Ƶĳ��򣬺��ж�д�ļ�������Ϊcsv�ĵ��Ĳ���

	//1.�����������ֻ�û������ok�Ļ���ֱ�ӽ�������
	
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


//1.DRYԭ��
//��Ҫ�ظ���Don��t repeat yourself���������������һ���������ԭ�����Ҫ�����ظ���
//����̽ṹ������ѭ������������ȣ��Ĵ��ھ���Ϊ�˱����ظ���
//һ���ظ������磬һ�������ʽ��һϵ����䣬��ͬ�ĸ���Ļ����ͻᴴ��һ���µĳ���


