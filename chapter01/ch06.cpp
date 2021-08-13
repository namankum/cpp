#include<iostream>
#include<string>
using namespace std;
int main (int srgc, char const *argv[]){
    string s1="good";
    string s2="morind";
    string s3=s1+s2+"!";

    cout <<s3<<endl;

    string s4="good";
    string s5="bad";
    bool b=(s4==s5);
    cout<<b<<endl;
    return 0;

}