#include <iostream>
#include <string>
#include "String.h"

using namespace std;

namespace samples
{
    String::String(const char* str)
        :mSize(strlen(str) + 1) // 초기화 리스트
    {
        mString = new char[mSize];
        memcpy(mString, str, mSize);
    }

    String::String(const String& str)
        :mSize(str.mSize) // 초기화 리스트
    {
        mString = new char[mSize];
        memcpy(mString, str.mString, mSize);
    }

    String::~String()
    {
        delete[] mString; // 힙 영역에 동적할당되는 메모리 삭제
    }

    void String::String Print()
    {
        cout << "Member String: " << mString << endl;
    }

}