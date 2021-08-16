#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int i = 1;
    cout << "구구단 몇단볼겨 ";
    cin >> n;
    while (i <= 9)
    {
        cout << n << " * " << i
             << " = " << n * i << endl;
        i++;
    }
    return 0;

}

// 증가연산자는 보통 루프문에서 많이 쓰인다 단독일땐 ++1 이나 1++ 이나 상관 없음 
