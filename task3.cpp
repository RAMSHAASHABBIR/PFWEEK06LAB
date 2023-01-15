#include <iostream>
using namespace std;
string zodiac(int date,string month);
main ()
{
    string result;
    int date;
    string month;
    cout <<"enter a date:";
    cin >> date;
    cout <<"enter a month:";
    cin >> month;
    result = zodiac(date,month);
}
string zodiac(int date,string month)
{
    string result;
    if((date >= 21 && month =="march") || (date <= 19 && month == "april"))
    {
        cout <<"aries" << endl;
    }
    else if((date >= 20 && month == "april") || (date <= 20 && month == "may"))
    {
        cout <<"taurus" << endl;
    }
    if((date >= 21 && month == "may") || (date <= 20 && month =="june"))
    {
        cout <<"gemini" << endl;
    }
    else if((date >= 21 && month =="june") || (date <= 22 && month =="july"))
    {
        cout <<"cancer" << endl;
    }
    if((date >= 23 && month =="july") || (date <= 22 && month =="august"))
    {
        cout <<"leo" << endl;
    }
    if((date >= 23 && month == "august") || (date <=22 && month == "september"))
    {
        cout <<"virgo" << endl;
    }
    else if((date >= 23 && month == "september") || (date <= 21 && month == "october"))
    {
        cout <<"libra" << endl;
    }
    if((date >= 22 && month == "october") || (date <= 21 && month =="november"))
    { 
        cout <<"scorpio" << endl;
    }
    else if((date >= 22 && month =="november") || (date <= 19 && month =="december"))
    { 
        cout << "sagittarius" << endl;
    }
    if((date >= 20 && month =="december") || (date <= 18 && month =="january"))
    {
        cout <<"capricon" << endl;
    }
    else if((date >= 19 && month == "january") || (date <= 20 && month == "feburary"))
    {
        cout <<"aquarius" << endl;
    }
    if((date >= 19 && month =="feburary") || (date <= 20 && month =="march"))
    {
        cout <<"pisces" << endl;
    }
    return result;
}

