#include <iostream>
#include <conio.h>
using namespace std;

#define Escape 27
#define UpArrow 72
#define DownArrow 80
#define LeftArrow 75
#define RightArrow 77

void main()
{
	setlocale(LC_ALL, "Russian");
	char key;
	do
	{
		key = _getch();
		//cout << (int)key << "\t" << key << endl;
		switch (key)
		{
		case UpArrow : case 'w':case 'W': cout << "������" << endl; break; 
		case DownArrow:case 's':case 'S': cout << "�����" << endl; break;
		case LeftArrow:case 'a': case 'A': cout << "�����" << endl; break;
		case RightArrow:case 'd': case 'D': cout << "������" << endl; break;
		case ' ': cout << "������" << endl; break;
		case 13 : cout << "�����" << endl; break;
		default: if (key != -32) cout << "Error" << endl;
		}

	} while (key != Escape);
}