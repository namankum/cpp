#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout << "숫자를 입력하세요:";
    cin >> number;
    switch (number)
    {
    case 0:
        cout << "zero\n";
         break;
    case 1:
        cout << "one\n";
         break;
    case 2:
        cout << "two\n"; //\n  이랑 endl;같은거다 개행문자 
        break;
    default:  //옵션 전부의케이스가 아닐경우 이러케 하라고 하는말 
        cout << "many\n";
         break;
    } //디폹엔 브레이크없어도 되고 디폴트는 생략도가능함 
    return 0;
}
//스위치문은 else if랑 같은 개뇸이요  하지만 브레이크의 기능을 잘 봐야함 
// 브레이크가 없으면 스위치문이 끝나지 않고 반복됨 

