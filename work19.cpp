#include <iostream>
using namespace std;
string checkspeed(float speed);
main()
{
    float speed;
    string result;
    cout <<"speed is:";
    cin >> speed;
    checkspeed(speed);
}

string checkspeed(float speed)
{
    string result;
    if(speed <=10)
    {
    cout <<"slow";
    }
if(speed > 10 && speed <= 50)
{
    cout <<"average";
}
if(speed > 50 && speed <= 150)
{
    cout <<"fast";
}
if(speed > 150 && speed <= 1000)
{
    cout <<"ultra fast";
}
return result;
}
