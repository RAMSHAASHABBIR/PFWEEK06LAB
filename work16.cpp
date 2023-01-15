#include <iostream>
using namespace std;
string checktitle(int age,char gender);
main()
{
    int age;
    char gender;
    string result;
    cout <<"enter age:";
    cin >> age;
    cout <<"enter gender:";
    cin >> gender;
   result = checktitle(age,gender);
}
string checktitle(int age,char gender)
{
    string result;
    if(age >= 16 && gender =='m')
    {
        cout <<"Mr";
    }
    if(age < 16 && gender =='m')
    {
        cout <<"Master";
    }
    if(age < 16 && gender =='f')
    {
        cout <<"Miss";
    }
    if(age >= 16 && gender =='f')
    {
        cout <<"Ms";
    }
    return result;
}