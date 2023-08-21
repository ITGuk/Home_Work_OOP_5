#include "mystring.h"
#include <iostream>
using namespace std;

mystring::mystring()
{
	str = new char[80];
	this->size = 80;
	usedsize = 0;
	cin >> str;
	usedsizer();
}

mystring::mystring(int size)
{
	str = new char[size + 1];
	this->size = size;
	usedsize = 0;
	cin >> str;
	usedsizer();
}

mystring::mystring(char* str, int size)
{
	this->size = size;
	this->str = str;
	usedsizer();
}

mystring::mystring(mystring* str)
{
	this->str = str->GetStr();
	this->size = str->GetSize();
	this->usedsize = str->GetUsedSize();
}

int mystring::GetUsedSize()
{
	return usedsize;
}

char* mystring::GetStr()
{
	return str;
}

void mystring::usedsizer()
{
	int i = -1;
	do
	{
		i++;
		usedsize++;
	} while (str[i] != '\0');
}

void mystring::Print()
{
	cout << str;
}

int mystring::GetSize()
{
	return size;
}