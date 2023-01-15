#include <iostream>
using namespace std;
float price(string fruit,int quantity,string weekdays);
main()
{
    string fruit;
    int quantity;
    float result;
    string weekdays;
    string weekends;
    cout <<"enter fruits:";
    cin >> fruit;
    cout <<"enter quantity";
    cin >> quantity;
    cout << "enter week days:";
    cin >> weekdays;
    result = price(fruit,quantity,weekdays);
}
float price(string fruit,int quantity,string weekdays)
{
    float result;
    if(weekdays == "monday" || weekdays == "tuesday" || weekdays == "wednesday" || weekdays =="thursday" || weekdays =="friday")
    {
        if(fruit == "banana")
        {
            result = quantity*2.50;
            cout <<"price is:" << result;
        }
        else if(fruit == "apple")
        {
            result = quantity*1.20;
            cout <<"price is:" << result;
        }
        if(fruit == "orange")
        {
            result = quantity*0.85;
            cout <<"price is:" << result;
        }
        else if(fruit == "grapefruit")
        {
            result = quantity*1.45;
            cout <<"price is:" << result;
        }
        if(fruit == "kiwi")
        {
            result = quantity*2.70;
            cout <<"price is:" << result;
        }
        else if(fruit == "pineapple")
        {
            result = quantity*5.50;
            cout <<"price is:" << result;
        }
        if(fruit == "grapes")
        {
            result = quantity*3.85;
            cout <<"price is:" << result;
        }
    }
    else
    {
        if(fruit =="banana")
        {
            result = quantity*2.70;
            cout <<"price is:" << result;
        }
        else if(fruit =="apple")
        {
            result = quantity*1.25;
            cout <<"price is:" << result;
        }
        if(fruit =="orange")
        {
            result = quantity*0.90;
            cout <<"price is:" << result;
        }
        else if(fruit =="grapefruit")
        {
            result = quantity*1.60;
            cout <<"price is:" << result;
        }
        if(fruit =="kiwi")
        {
            result = quantity*3.00;
            cout <<"price is:" << result;
        }
        else if(fruit =="pineapple")
        {
            result = quantity*5.60;
            cout <<"price is:" << result;
        }
        if(fruit =="grapes")
        {
            result = quantity*4.20;
            cout <<"price is:" << result;
        }
    }
    return result;
}
