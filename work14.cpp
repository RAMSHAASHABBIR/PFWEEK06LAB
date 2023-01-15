#include <iostream>
using namespace std;
float discount(float amount,string day,string month);
main()
{
    float amount;
    string day;
    string month;
    float result;
    cout <<"enter a no:";
    cin >> amount;
    cout <<"enter a day:";
    cin >> day;
    cout <<"enter a month:";
    cin >> month;
    result = discount(amount,day,month);
}
float discount(float amount,string day,string month)
{
    float result;
    if(day == "sunday" && (month == "october" || month == "march" || month == "august"))
    result = amount - (0.1*amount);
    cout <<"discount is:" << result;
    return result;
}
