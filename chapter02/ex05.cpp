#include <iostream>
using namespace std;
int main(int argc, char const
*argv[]) {
    int x,y;
    cout<<"값입력";
    cin>>x;

    cout<<"y값입력";
    cin>>y;

    if (x>y)
    cout <<"x가y보다큼"<<endl;
    else if (x<y)
    cout <<"x가y보다 작다 "<<endl;
    else
    cout <<"x와y같다"<<endl;
    return 0;}