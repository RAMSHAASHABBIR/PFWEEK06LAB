#include <iostream>
using namespace std;
string check(int n1,int n2,int n3);
main()
{
    int n1;
    int n2;
    int n3;
    string result;
    cout <<"enter a no:";
    cin >> n1;
    cout <<"enter a no:";
    cin >> n2;
    cout <<"enter a no:";
    cin >> n3;
   result = check(n1,n2,n3);
}
string check(int n1,int n2,int n3)
{
    string result;
    if(n1 == n2)
    {
        if(n2 == n3)
    {
        cout <<"yes";
    }
    }
    else
    {
        cout <<"no";
    }
    return result;
}