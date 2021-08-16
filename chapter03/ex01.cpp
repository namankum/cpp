#include <iostream>
using namespace std;
// int max(int x, int y)
// {
//     if (x > y)
//         return x;
//     else
//         return y;
// }
// int max(int x, int y) 함수원형  
// 내가쓰려는게 뒤에 있을때 에러가 날때도 있는데 이럴땐 함수원형을 앞에 써주면됨 

int main(int argc, char const *argv[]){
    int n;
    n = max(2, 3);
    cout << "함수 호출 결과 : " << n << endl;
    return 0;
}

int max(int x, int y){
    if (x > y)
        return x;
    else
        return y;
}