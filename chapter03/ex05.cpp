#include <iostream>
using namespace std;
void display(char c = '*', int n = 10)
{
    for (int i = 0; i < n; i++)
    {
        cout << c;
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    display();
    display('#');
    display('$', 5);
    return 0;
}

// c++에서 기억할거 call by value,call by reference  레퍼런스선언법도기억하시게 
