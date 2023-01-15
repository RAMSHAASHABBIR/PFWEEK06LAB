#include <iostream>
using namespace std;
float totalincome(string screen,int rows,int coloumns);
main()
{
    string screen;
    int rows;
    int coloumns;
    float result;
    cout <<"type of screen:";
    cin >> screen;
    cout <<"enter no of rows:";
    cin >> rows;
    cout <<"enter no of coloumns:";
    cin >> coloumns;
   result = totalincome(screen,rows,coloumns);
}
float totalincome(string screen,int rows,int coloumns)
{
    float result;
    float premier = 12.0;
    float normal = 7.5;
    float discount = 5.0;
    if(screen == "premier")
    {
    result = rows*coloumns*premier;
    cout <<"total income is:" << result;
    }
    if(screen == "normal")
    {
        result = rows*coloumns*normal;
        cout <<"total income is:" << result;
    }
    if(screen =="discount")
    {
        result = rows*coloumns*discount;
        cout <<"total income is:" << result;
    }
     return result;
}

