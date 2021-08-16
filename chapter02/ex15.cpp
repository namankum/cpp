#include <iostream>
using namespace std;
int main()
{

    const int STUDENTS = 5;
    int scores[STUDENTS]; //배열선언 []배열표기 고정되있음 수정못함 
     // 배열[]안에있는거는 배열의 시작주소를 가지는 상수다. 리터럴상수변수등 써서 크기를 지정한다 
    int sum = 0;
    int i, average;
    for (i = 0; i < STUDENTS; i++)
    {
        cout << "학생성적 ";
        cin >> scores[i];
    }
    for (i = 0; i < STUDENTS; i++)
    {
        sum += scores[i];
    }
    average = sum / STUDENTS;
    cout << "평균 " << average << endl;
    return 0;
}