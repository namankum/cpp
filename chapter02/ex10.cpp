#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    string str;
    do
    {
        cout << "문자 입력:";
        getline(cin, str);  //요거는 공백포함된 모든 문자열 받을수 있다 
       // cin>>str;
// 여기서 >>는 데이터구분 while문자  스페이스 탭 엔터 이게 있으면 그사이에 입력이 끝낫다고 생각해서 
//중간에  공백 이후 그뒷줄이 안나온다 
        cout << "사용자 입력: " << str << endl;
    } while (str != "exit"); //!= 같지않으면 
    return 0;
}

// 횟수가 정해져있지않을때 while 쓰고 정해져있을때 for쓰는게 낫다 
