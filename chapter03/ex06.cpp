#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string s1 = "today", s2 = "monday";
    string s3 = "day";
    string s4;
    s4 = s1 + " is " + s2 + " happy " + s3;
    
    // string  s5 = "hello"+"world"  이건 문자열 아니고 char로 인식되서 에러남 
//  \0 은 아스키코드 0 null이다 
    string s5 = string ("hello")+"world";
    //윗줄처럼 바꾸면 문자열로 인식됨 
    cout << s4 << endl;
    
    return 0;
}