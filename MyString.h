class MyString{
  int leng;
  char* str;
public:
  MyString(const char* str, const int& leng);
  MyString();
  MyString(const char& c);
  MyString& operator = (const MyString& s);

};