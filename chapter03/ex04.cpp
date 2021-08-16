// overload 중복함수 파이썬에는 없는거 자주쓴데 
// 함수이름이 같아도 뒤에 매개변수가 다르면 각기다른함수로인식함 
#include <iostream>
using namespace std;
int square(int i)
{
    cout << "square(int) 호출" << endl;
    return i * i; //제곱
}
double square(double i)
{
    cout << "square(double) 호출" << endl;
    return i * i;
}
int main(int argc, char const *argv[])
{
    cout << square(10) << endl;
    cout << square(2.0) << endl;
    return 0;
}
