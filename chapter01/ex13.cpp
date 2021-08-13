#include<iostream>
#include<string>
using namespace std;

int main (int argc , char const * argv[]){
    int x = 100;
    x++;  
    cout <<x<<endl;

    x--;
    cout <<x<<endl;

    cout <<++x<<endl;  //x에서 1씩증가
    cout <<x++<<endl;  // 1씩증가 하고 x 더하기
    cout<<x<<endl;  //증가된거에 x를 더하니까 102 가됨 

    cout <<x--<<endl;
    cout <<--x<<endl;
    cout<<x<<endl;

    return 0;}