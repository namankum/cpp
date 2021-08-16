#include <iostream>
#include <string>
using namespace std;
class SuperClass
{
public:
    void print()
    {
        cout << "SuperClass의 print()" << endl;
    }
};
class ChildClass : public SuperClass
{
public:
    void print()
    {
        SuperClass::print();
// 부모메서드를 호출하는법 :: 두개쓴다 이형태도 기억하시게 
        cout << "ChildClass의 print()" << endl;
    }
};
int main(int argc, char const *argv[])
{
    ChildClass c;
    c.print();
    return 0;
}
