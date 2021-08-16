#include <iostream>
#include <string>
using namespace std;
class Shape
{
    int x, y;

public:
    Shape()
    {
        cout << "Shape() 생성자" << endl;
    }
    Shape(int xloc, int yloc) : x(xloc), y(yloc)
    {
        cout << "Shape(xloc, yloc) 생성자" << endl;
    }
    ~Shape()
    {
        cout << "~Shape() 소멸자" << endl;
    }
};
class Rectangle : public Shape //: 뒤에써는 상속 
{
    int width, height;
//아래 부모생성자가 호출문에 없는경우 디폴트 부모생성자가 호출된다 
public: 
    Rectangle()
    {
        cout << "Rectangle() 생성자" << endl;
    }
//요형태를기억하래 일부는 부모 나머지는 자기의 초기화하는형태 
    Rectangle(int x, int y, int w, int h) : Shape(x, y), width(w), height(h)
    { 
//위에꺼 멤버초기화리스트  : 뒤에꺼 부모생성자호출지정 , 뒤에는 자기꺼지정  
// 부모생성자호출땐 항상 인자와같이 호출 . 전달되는 매개변수를 잘 지정해야된다 
        cout << "Rectangle(x, y, w, h) 생성자" << endl;
    }
    ~Rectangle()
    {
        cout << "~Rectangle() 소멸자" << endl;
    }
// ~ 파괴자 소멸자 얘네들은 인스턴스 메모리에 삭제될때 호출된다 
//  파이썬에서는 메모리클린업을 알아서 하는데 c++에서는 메모리 클린업을 개발자가 해야된다 
// 그래서 클린업할때 파괴자에서 작성해서 없애버린다 근데 동적메모리를 안쓸경우 별 상관이 없다네 
 
};
int main(int argc, char const *argv[])
{
    Rectangle r1; //디폴트생성자로 호출하겟다는거
    cout << endl;
    Rectangle r2(0, 0, 100, 100); //  27줄이 불려온다 
    cout << endl;
    return 0;
}
