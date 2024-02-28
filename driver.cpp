#include<iostream>
#include<string>
#include "DayOfYear.cpp"
using namespace std;

int main(){
    int day;
    cout << "Enter the day:";
    cin >> day;
   DayOfYear d(day);
   d.print();
    return 0;
}