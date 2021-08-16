#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
 int x=100;
 if (x ==100) // 한줄짜리일때 중괄호가 없어도됨
    cout <<"x가100이다"<<endl;

 if (x ==100){ //두줄 이상일때 반드시 중괄호 있어야됨 
     cout <<"x값출력"<<endl;
     cout <<"x가100임"<<endl;}
     return 0;
 }