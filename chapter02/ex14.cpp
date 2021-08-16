#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 5; i++)
    {
        cout << "continue 문장전문장" << endl;
        continue;
        cout << "continue 문장후문장" << endl;
    }
    return 0;
}

//컨티뉴가 있으면 그 후에꺼는 실행안하고 전에꺼만함 