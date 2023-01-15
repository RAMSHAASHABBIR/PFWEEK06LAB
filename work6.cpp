#include <iostream>
using namespace std;
main()
{
    int n1;
    int n2;
    int n3;
    cout <<"enter a no:";
    cin >> n1;
    cout <<"enter a no:";
    cin >> n2;
    cout <<"enter a no:";
    cin >> n3;
    if(n1 > n2)
    {
        if(n1 > n3)
        {
        cout <<"greater no is:" << n1;
        }
    }
    if(n2 > n1)
    {
        if(n2 > n3)
        {
        cout <<"greater no is:" << n2;
        }
    }
    if(n3 > n1)
    {
        if(n3 > n2)
        {
        cout <<"greater no is:" << n3;
        }
    }
}