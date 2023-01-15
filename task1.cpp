#include <iostream>
using namespace std;
string condition(string temperature,string humidity);
main()
{
    string result;
    string temperature;
    string humidity;
    cout <<"enter temperature:";
    cin >> temperature;
    cout << "enter humidity:";
    cin >> humidity;
    result = condition(temperature,humidity);
}
string condition(string temperature,string humidity)
{
    string result;
    if(temperature == "warm" && humidity == "dry")
    { 
        cout <<"play tennis";
    }
    if(temperature == "warm" && humidity == "humid")
    { 
        cout <<"swim";
    }
    if(temperature == "cold" && humidity == "dry")
    {
        cout <<"play basketball";
    }
    if(temperature == "cold" && humidity == "humid")
    {
        cout <<"watch tv";
    }
    return result;
}

