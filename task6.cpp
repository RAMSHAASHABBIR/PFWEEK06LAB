#include <iostream>
using namespace std;
float price(string month,int people);
main()
{
    string month;
    int people;
    float result;
    cout <<"enter a month:";
    cin >> month;
    cout <<"enter people:";
    cin >> people;
    result = price(month,people);
}
float price(string month,int people)
{
    float result;
    if(month == "may" || month == "october")
    {
        if(people < 7)
        {
            result = people*50;
            cout <<"price of studio is:" << result << endl;
            result = people*65;
            cout <<"price of department is:" << result << endl;
        }
        else if(people >= 7 && people <=14)
        {
            result = (50 -(0.05*50))*people;
            cout <<"price of studio is:" << result << endl;
            result = 65*people;
            cout <<"price of department is:" << result << endl;
        }
        if(people > 14)
        {
            result = (50 -(0.3*50))*people;
            cout <<"price of studio is:" << result << endl;
            result = (65 -(0.1*65))*people;
            cout <<"price of department is:" << result << endl;
        }
    }   
   if(month =="june" || month == "september")
   { 
        if(people <= 14)
            {
            result = 75.2*people;
            cout <<"price of studio is:" << result << endl;
            result = 68.70*people; 
            cout <<"price of department is:" << result <<endl ;
            }
        else if(people > 14)
           {
            result = (75.2-(0.2*75.2))*people;
            cout <<"price of studio is:" << result << endl;
            result = (68.70-(0.1*68.70))*people; 
            cout <<"price of department is:" << result << endl;
           }
   }
   if(month == "july" || month == "august")
   {
    if(people <=14)
    {
        result = 76*people;
        cout <<"price of studio is:" << result << endl;
        result = 77*people;
        cout <<"price of department is:" << result << endl;
    }
    else if(people > 14)
    {
    result = 76*people; 
    cout <<"price of studio is:" << result << endl;
    result = (77 - (0.1*77))*people;
     cout <<"price of department is:" << result << endl;
    }
   }
   return result;
}
        