#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>
using namespace std;


bool OpenFile(char* fname)
{
	fstream f(fname);
	if (!f.is_open())
	{
		cout << "‘айл не в≥дкрито!" << endl;
		return false;
	}
	f.close();
	return true;
}


void PrintInfo(char* fname) 
{
	ifstream fin(fname); 
	string s; 
	while (getline(fin, s)) 
	{
		cout << s << endl; 
	}
	cout << endl;
}

int CountSumbols(char* fname) 
{
	ifstream fin(fname); 
	string s; 
	int k = 0; 
	while (getline(fin, s))
	{ 
		for (unsigned i = 0; i < s.length(); i++)
			if (s[i] == '+' || s[i] == '-' || s[i] == '=')
				k++;
	}
	return k;
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char fname[100]; 
	cout << "¬вед≥ть ≥м'€ файлу €кий потр≥бно в≥дкрити : "; cin >> fname;

	OpenFile(fname);
	PrintInfo(fname); 
	cout << "k(+-=) = " << CountSumbols(fname) << endl;

	return 0;

}
