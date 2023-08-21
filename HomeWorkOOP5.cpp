#include <iostream>
#include "mystring.h"
using namespace std;

int main()
{
    cout << "\n\nConstructor [80]: ";
    mystring str1;
    cout << "\n\nPrint: ";
    str1.Print();
    cout << "\n\nSize: " << str1.GetSize();
    cout << "\n\nUsed Size: " << str1.GetUsedSize();
    cout << "\n\n\n\nConstructor with specified size: ";
    int size = 0;
    cout << "\n\nEnter size: ";
    cin >> size;
    cout << "\n\nEnter string: ";

    mystring str2(size);
    cout << "\n\nPrint: ";
    str2.Print();
    cout << "\n\nSize: " << str2.GetSize();
    cout << "\n\nUsed Size: " << str2.GetUsedSize();
    cout << "\n\n\n\nConstructor with existing character array and size: ";
    cout << "\n\nEnter size: ";
    cin >> size;
    char* str = new char[size];
    cout << "\n\nEnter string: ";
    cin >> str;

    mystring str3(str, size);
    cout << "\n\nPrint: ";
    str3.Print();
    cout << "\n\nSize: " << str3.GetSize();
    cout << "\n\nUsed Size: " << str3.GetUsedSize();
    cout << "\n\n\n\nConstructor that initializes a mystring object using another mystring object: ";

    mystring str4(str1);
    cout << "\n\nPrint: ";
    str4.Print();
    cout << "\n\nSize: " << str4.GetSize();
    cout << "\n\nUsed Size: " << str4.GetUsedSize();
}