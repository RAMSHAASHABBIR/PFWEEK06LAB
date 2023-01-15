#include <iostream>
using namespace std;
string checkper(string name,float totalper,float totalsubjectnoobtain,float totalsubjectno);
main()
{
    string grade;
    string name;
    float totalper;
    float subject1;
    float subject2;
    float subject3;
    float subject4;
    float subject5;
    float totalsubjectnoobtain;
    float totalsubjectno;
    cout <<"enter student name:";
    cin >> name;
    cout <<"enter subject no:";
    cin >> subject1;
    cout <<"enter subject no:";
    cin >> subject2;
    cout <<"enter subject no:";
    cin >> subject3;
    cout <<"enter subject no:";
    cin >> subject4;
    cout << "enter subject no:";
    cin >> subject5;
    totalsubjectnoobtain = subject1 + subject2 + subject3 + subject4 + subject5;
    cout <<"total marks are:" << totalsubjectnoobtain;
   grade = checkper(name,totalper,totalsubjectnoobtain,totalsubjectnoobtain );
}
 string checkper(string name,float totalper,float totalsubjectnoobtain,float totalsubjectno)
{
        string grade;
        totalsubjectno = 500;
        totalper = (totalsubjectnoobtain/totalsubjectno)*100;
        cout <<"total percentage is:" << totalper << endl;
    if(totalper >= 90 && totalper <=100)
    {
        cout <<"A+" << endl;
    }
   else if(totalper >= 81 && totalper <= 90 )
    {
        cout <<"A" << endl;
    }
    else if(totalper >= 71 && totalper <= 80)
    {
        cout <<"B+" << endl;
    }
    else if(totalper >= 61 && totalper <= 70)
    {
        cout <<"B";
    }
    else if(totalper >= 51 && totalper <= 60)
    { 
        cout <<"C" << endl;
    }
    else if(totalper >= 41 && totalper <= 50)
    {
        cout <<"D" << endl;
    } 
   else if(totalper < 40)
    { 
        cout <<"F" << endl;
    }
    return grade;
}

    
