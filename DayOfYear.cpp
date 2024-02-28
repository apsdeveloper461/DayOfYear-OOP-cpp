#include<iostream>
#include<string>
#include "DayOfYear.h"
using namespace std;
string DayOfYear::months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
int DayOfYear::days[12]={
    31,28,31,30,31,30,31,31,30,31,30,31};
DayOfYear::DayOfYear(int day)
{
    this->day=day;
}

void DayOfYear::print() {
    for (int i = 0; i < 12; i++)
    {
        if(day < days[i] || day == days[i]){
           cout << "\n<------ Detail of this Day ------->";
           cout << endl << months[i] << " " << day << endl;
           break;
        }else{
            day-=days[i];
        }
    }
    
}