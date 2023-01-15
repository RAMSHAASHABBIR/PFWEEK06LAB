#include <iostream>
using namespace std;
float cost(string product,string city,int quantity);
main()
{
    string product;
    string city;
    int quantity;
    float result;
   result = cost(product,city,quantity);
}
float cost(string product,string city,int quantity)
{
    float result;
    cout <<"enter product:";
    cin >> product;
    cout <<"enter city:";
    cin >> city;
    cout <<"enter quantity:";
    cin >> quantity;
    if(product == "coffe" && city == "sofia")
    {
        result = quantity*0.50;
        cout <<"cost is:" << result;
    }
    if(product == "coffe" && city == "plovdia")
    {
        result = quantity*0.40;
        cout <<"cost is:" << result;
    }
    if(product == "coffe" && city == "varna")
    {
        result = quantity*0.45;
        cout <<"cost is:" << result;
    }
    if(product == "water" && city == "sofia")
    {
        result = quantity*0.80;
        cout <<"cost is:" << result;
    }
    if(product == "water" && city == "plovdia")
    {
        result = quantity*0.70;
        cout <<"cost is:" << result;
    }

    if(product == "water" && city == "varna")
    {
        result = quantity*0.70;
        cout <<"cost is:" << result;
    }
    if(product == "beer" && city == "sofia")
    {
        result = quantity*1.20;
        cout <<"cost is:" << result;
    }
    if(product == "beer" && city == "plovdia")
    {
        result = quantity*1.15;
        cout <<"cost is:" << result;
    }
    if(product == "beer" && city == "varna")
    {
        result = quantity*1.10;
        cout <<"cost is:" << result;
    }
    if(product == "sweeets" && city == "sofia")
    {
        result = quantity*1.45;
        cout <<"cost is:" << result;
    }
    if(product == "sweeets" && city == "plovdia")
    {
        result = quantity*1.30;
        cout <<"cost is:" << result;
    }
    if(product == "sweeets" && city == "varna")
    {
        result = quantity*1.35;
        cout <<"cost is:" << result;
    }

if(product == "peanuts" && city == "sofia")
    {
        result = quantity*1.60;
        cout <<"cost is:" << result;
    }
    if(product == "peanuts" && city == "plovdia")
    {
        result = quantity*1.50;
        cout <<"cost is:" << result;
    }
    if(product == "peanuts" && city == "varna")
    {
        result = quantity*1.55;
        cout <<"cost is:" << result;
    }
    return result;
}