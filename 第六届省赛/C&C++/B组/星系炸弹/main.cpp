#include <iostream>
using namespace std;
int monthDay[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int count=1000;
int year=2014;
int month=11;
int day=9;
bool judgeBissextile(int year)
{
    if(year%400==0)
    {
        return true;
    }
    else if(year%100!=0&&year%4==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int monthadd()
{
    if(month<12)
    {
        month++;
    }
    else
    {
        year++;
        month=1;
    }
}

int dayadd()
{
    if(judgeBissextile(year)&&month==2&&day<29)
    {

        day++;
        return 0;
    }
    else if(judgeBissextile(year)&&month==2&&day==29)
    {
        day=1;
        monthadd();
        return 0;
    }

    if(day!=monthDay[month])
    {
        day++;
        return 0;
    }
    else
    {
        day=1;
        monthadd();
        return 0;
    }
}
int main()
{

    while(count!=0)
    {
        dayadd();
        count--;
    }
    cout<<year<<" "<<month<<" "<<day<<endl;
    return 0;
}
