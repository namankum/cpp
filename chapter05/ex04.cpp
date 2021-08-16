#include<iostream>
using namespace std;
class Time {
    protected:
         Time{
        int hour;
        int minute;
    public:
    Time (int h =0, int m=0): hour (h), minute(m){ 
        //멤버초기화리스트
    }
    void print (){

    }
    }

}



Time(int h, int m) {
 hour = h;
 minute = m;
}
Time(int h, int m) : hour(h), minute(m) { //이형태 자주쓴덷 
}

// 생성자를 정의하지 않으면 디폴트생성자가 자동추가됨 디폴트생성자는 매개변수없는생성자 