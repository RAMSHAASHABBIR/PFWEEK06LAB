#include <iostream>
using namespace std;
float discount(float num,string day,string month);
main()
{
float result;
float num;
string day;
string month;
cout <<"enter a no:";
cin >> num;
cout <<"enter a day:";
cin >> day;
cout <<"enter a month:";
cin >> month;
result = discount(num,day,month);
}
float discount(float num,string day,string month)
{
float result;
if(day == "sunday")
{
    if(month == "october")
    {
     result = num - (0.1*num);
     cout <<"discount is:" << result;
    }
}
if(day == "sunday")
{
    if(month != "october")
    {
        result = num - (0.05*num);
        cout <<"discount is:" << result;
    }
}
return result;
}