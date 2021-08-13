#include <iostream>
using namespace std;
int main()
{

    const int STUDENTS = 5;
    int scores[STUDENTS]; //배열선언 []배열표기
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