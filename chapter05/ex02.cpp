#include <iostream>
using namespace std;
class Time
{
public:
    int hour;
    int minute;
    Time()
    {
        hour = 0;
        minute = 0;
    }
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
    Time a; // 디폴트생성자호출
    Time b(10, 25); //int 2개 인자 
    a.print();
    b.print();

//    Time c(10);  매개변수 1개 3개 받는게 없으니까 요런애들은 에러남 
//    Time d(10,20,30);  
    return 0;
}