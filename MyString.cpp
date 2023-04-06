#include "MyString.h"

MyString::MyString(const char* str, const int& leng): leng(leng){
  this->str = new char[leng];
  for (int i = 0; i < leng; ++i){
    this->str[i] = str[i];
  }
}

MyString::MyString(): leng(0){
  str = new char [0];
}

MyString::MyString(const char& c): leng(0){
  str = new char[1];
  str[0] = c;
}

MyString &MyString::operator = (const MyString &s) = default;


