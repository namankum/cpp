#include <iostream>
using namespace std;
class Time
{
public:
    int hour;
    int minute;
    // 생성자
    Time(int h, int m)
    {
        hour = h;
        minute = m;
    }
    void print()
    {
        cout << hour << ":" << minute << endl;
    }
};
int main()
{
    // Time a;  이러케 쓰려면 디폴트생성자를호출하겟다는거 Time (){} 이런 형식이 정의 되어있어야됨 
    Time b(10, 25); // 이형태를 젤 많이 쓴데 
    Time c{10, 25};
    Time d = {10, 25};
    b.print();
    c.print();
    d.print();
    return 0;
}