#include<iostream>
#include<string>
using namespace std;
class DayOfYear
{
private:
    int day;
    static int days[12];
    static string months[12];
public:
    DayOfYear(int day);
    void print();
};
