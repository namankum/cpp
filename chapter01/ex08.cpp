#include <iostream>
#include <string>

using namespace std;
auto add (int x, int y){
    return x+y;}

    int main (int argc , char const *argv[]){
        auto d = 1.0;
        auto sum = add (5,10);

        cout << d<< " " <<sum << endl;
        return 0;
    }

//  auto는  컴파일러가 문맥을 보고 자동으로 데이타 타입을 결정함다 