#include <iostream>
using namespace std;
float price(char code, string time, int minutes);
main()
{
    char code;
    string time;
    int minutes;
    float result;
    cout << "enter the type p or r:";
    cin >> code;
    cout << "enter the minutes:";
    cin >> minutes;
    result = price(code, time, minutes);

}
float price(char code, string time, int minutes)
{
    float result;
    if(code =='r')
    {
        if(minutes <= 50)
        {
            result = 10;
            cout <<"cost is:" << result;
        }
        else
        {
            result = minutes - 50;
            result = 10 + (result*0.20);
            cout <<"cost is:" << result;
        }
    }
    if(code == 'p')
    {
        cout <<"enter a time:";
        cin >> time;
        if(time == "day")
        {
            if(minutes <= 75)
            {
                result = 25;
                cout <<"cost is:" << result;
            }
            else
            {
            result = minutes - 75;
            result = 25 + (result*0.10);
            cout <<"cost is:" << result;
            }
        }
        else if(time == "neght")
        {
            if(minutes <= 100)
            {
                result = 25;
                cout <<"cost is:" << result;
            }
            else
            {
            result = minutes - 100;
            result = 25 + (result*0.05);
            cout <<"cost is:" << result;
            }
        }
    } 
    return result;
}      




    
    