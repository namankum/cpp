#include <iostream>
using namespace std;
int main()
{    int i;
    int sum = 0; //메인함수 지역변수다

    for (int i = 0; i <= 50; i++) //for블럭에 선언된 지역변수 이블록을벗어나면 사라짐 
    {
        sum += i;
    }
    cout << "1~50의정수합 = " << sum << endl;
    cout<<i<<endl;
    return 0;
}

// c++에서 지역변수는 {}안에선언된거로 그 블록 벗어나면 그변수는 사라진다 
