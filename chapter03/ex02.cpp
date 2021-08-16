// 파이선에서 호출방법 call by value 복사본 넘어감  int floot bool
//변수 데이타 타잎에 따라 자동 으로 넘어감 개발자가신경안써도됨
// call by reference 원본 넘어감 위에꺼 뺴고 나머지것들
// c++에서는 개발자가 선택해서 전달하수 있다

#include <iostream>
using namespace std;
void swap(int x, int y)
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
    //복사본이 넘어가기때문에 원본에 변화없다 call by value 이다 
    printf("a=%d, b=%d\n", a, b);
    return 0;
}
