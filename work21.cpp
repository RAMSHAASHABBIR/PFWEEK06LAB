#include <iostream>
using namespace std;
float price(float distance,string time);
main()
{
    float distance;
    string time;
    float result;
    cout <<"enter distance:";
    cin >> distance;
    cout <<" enter time:";
    cin >> time;
   result = price(distance,time);
}
float price(float distance,string time)
{
    float result;
if(distance < 20)
{
    if(time == "day")
    {
        result = distance*0.79;
        cout <<"lowest price is:" << result;
    }
    else if(time == "neght")
    {
        result = distance*0.90;
        cout <<"lowest price is:" << result;  
    }
}
if(distance >= 20 && distance < 100)
{
if(time == "day")
    {
        result = distance*0.09;
        cout <<"lowest price is:" << result;
    }
    else if(time == "neght")
    {
        result = distance*0.09;
        cout <<"lowest price is:" << result;  
    }
}
if(distance >= 100)
{
    if(time == "day")
    {
        result = distance*0.06;
        cout <<"lowest price is:" << result;
    }
    else if(time == "neght")
    {
        result = distance*0.06;
        cout <<"lowest price is:" << result;  
    }
}
return result;
}  