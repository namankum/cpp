#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 10; i++)
    {
        cout << i << " ";
        if (i == 6) break;
    }
    return 0;
}
