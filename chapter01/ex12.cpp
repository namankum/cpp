#include<iostream>
#include<string>
using namespace std;

int main (int argc , char const * argv[]){
    int x=100;
    int y=200;

    int result = x+y;
    cout <<"x/y:"<<x/y<<endl;
    cout <<"x%3:"<<x%3<<endl;
    cout <<"x/(double)y:"<<x/(double)y<<endl;}

    // 정수에대한 나누기 결과에서 실수가 나와도 무조건 정수로 나온다  버림처리한다 
    // 12줄 캐스팅 연산자 더블써서 형변환하고 지정한 타입으로 나오게 한다  int 정수 double실수 
    