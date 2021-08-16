#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    string list[] = {"홍길동", "고길동", "둘리"};
    for (auto &name : list) //참조변수 & 가 있어서) 주소참조작업만 함
    {
        cout << name << endl;
    }
//  작동시 위에꺼가 더 빠르다  참조되는거만 쓰니까 실제 데이타길이에 영향안받음 
//아래꺼는 복사를 해야되니까 데이터길이가 길때 다복사해야되니까 속도느림 
        for (auto name : list) // 복사를 하기됨 
    {
        cout << name << endl;
    }

    return 0;
}
