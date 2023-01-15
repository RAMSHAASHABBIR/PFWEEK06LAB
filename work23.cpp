#include <iostream>
using namespace std;
float leftmoney(float budget,string type,int people);
main()
{
float budget;
string type;
int people;
float result;
float money;
cout <<"enter your budget:";
cin >> budget;
cout <<"enter ticket type:";
cin >> type;
cout <<"enter people:";
cin >> people;
money = leftmoney(budget,type,people);
}
float leftmoney(float budget,string type,int people)
{
    float remain;
    float aftert;
    float price;
    float money;
    
    if((people >= 1 && people <= 4) && type == "vp") 
    {
        remain = budget*0.75;
        aftert = budget - remain;
        price = people*499.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    else if((people >= 1 && people <= 4) && type == "normal") 
    {
        remain = budget*0.75;
        aftert = budget - remain;
        price = people*249.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    if((people >=5  && people <= 9) && type == "vp") 
    {
        remain = budget*0.60;
        aftert = budget - remain;
        price = people*499.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    else if((people >=5  && people <= 9) && type == "normal") 
    {
        remain = budget*0.60;
        aftert = budget - remain;
        price = people*249.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    if((people >=10  && people <= 24) && type == "vp") 
    {
        remain = budget*0.50;
        aftert = budget - remain;
        price = people*499.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    else if((people >=10  && people <= 24) && type == "normal") 
    {
        remain = budget*0.50;
        aftert = budget - remain;
        price = people*249.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    if((people >=25 && people <= 49) && type == "vp") 
    {
        remain = budget*0.40;
        aftert = budget - remain;
        price = people*499.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    else if((people >=25  && people <= 49) && type == "normal") 
    {
        remain = budget*0.40;
        aftert = budget - remain;
        price = people*249.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
     if((people == 50  || people > 50) && type == "vp") 
    {
        remain = budget*0.25;
        aftert = budget - remain;
        price = people*499.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
     else if((people == 50  || people > 50) && type == "normal") 
    {
        remain = budget*0.25;
        aftert = budget - remain;
        price = people*249.99;
        money = aftert - price;
        if(money > 0)
        {
            money = money;
            cout <<"left money:" << money;
        }
        else
        {
            money = money*-1;
            cout <<"required money:" << money;
        }
    }
    return money;
}

   