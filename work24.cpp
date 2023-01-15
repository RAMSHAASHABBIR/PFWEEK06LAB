#include <iostream>
#include <cmath>
using namespace std;
float howmuchplay(string year,int holidays,int weekends);
main()
{
    string year;
    int holidays;
    int weekends;
    float result;
    cout <<"enter year:";
    cin >> year;
    cout << "enter holidays:";
    cin >> holidays;
    cout << "enter weekends:";
    cin >> weekends;
    result = howmuchplay(year,holidays,weekends);
}
float howmuchplay(string year,int holidays,int weekends) 
{
    float result;
    int weekendsinyear = 52;
    float result1;
    float result2;
    if(year =="normal")
    {
        result = (((holidays/3)*2) + weekends + ((weekendsinyear - weekends)/4)*3);
        cout <<"he plays" << floor(result) <<"days through out the year";
    }
    else if(year == "leap")
    {
       result1 = (((holidays/3)*2) + weekends + ((weekendsinyear - weekends)/4)*3);
       result2 = 0.15*result1;
       result = result1 + result2;
       cout <<"he plays" << floor(result) <<"days through out the year";
    }
    return result;
}

