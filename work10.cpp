#include <iostream>
using namespace std;
char calculate(int num);
main()
{
    int num;
    char result;
    cout <<"enter a no:";
    cin >> num;
    result = calculate(num);
}

char calculate(int num)
{
    char result;
    if(num < 50)
    {
        cout <<"f";
    }
    if(num >= 50 && num <= 60)
    {
        cout <<"e";
    }
    if(num >= 61 && num <=70)
    {
        cout <<"d";
    }
    if(num >= 71 && num <= 80 )
    {
        cout <<"c";
    }
    if(num >= 81 && num <= 85)
    {
        cout <<"b";
    }
    if(num > 85)
    {
        cout <<"a";
    }
    return result;
}