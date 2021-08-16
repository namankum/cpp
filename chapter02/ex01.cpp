#include<iostream>
using namespace std;
int main (int argc, char const *argv[]){
    bool b;
    b = (1==2);
    cout <<std::boolalpha; //bpplapah는  부울린을리터럴로나오게하는거 
 //   cout <<boolalpha;  2줄에 std써놔서 안써도되긴함 
    cout <<b<<endl;
    return 0;
}