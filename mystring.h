#pragma once
class mystring
{
private:
	char* str = nullptr;
	int size;
	int usedsize;
	void usedsizer();

public:
	mystring();
	mystring(int);
	mystring(char*, int);
	mystring(mystring*);
	char* GetStr();
	void Print();
	int GetSize();
	int GetUsedSize();
};