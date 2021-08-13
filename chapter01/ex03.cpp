#include<iostream>
#include<string> //문자열을 처리하는 클라스다 
//변수를 선언하고 써야되고 선언된변수만 사용할수있다 
using namespace std;
int main (int argc, char const *argv[])
{
    int i;
    i=100;
// int i =1000;
//int i {1000}

    cout<<i<<endl;
    string s{"hello"}; //string s = "hello "와 동일
    cout<<s<<endl;
    return 0;
}