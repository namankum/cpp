// call by refernce 선언문에서 변수앞에 &가 붙으면 레퍼런스변수를 쓰겟다는말
// 이거 쓸때는 원본이 있어야 쓸수 있다

#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}
int main(int argc, char const *argv[])
{
    int a = 100, b = 200;
    printf("a=%d, b=%d\n", a, b);
    swap(a, b);
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
