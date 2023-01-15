#include <iostream>
using namespace std;
string position(int h,int x,int y);
main()
{
    int h;
    int x;
    int y;
    string result;
    cout <<"enter h:";
    cin >> h;
    cout <<"enter x:";
    cin >> x;
    cout <<"enter y:";
    cin >> y;
    result = position(h,x,y);
}
string position(int h,int x,int y)
{
    string result;
    if(x < 0 || x > 2*h || y < 0 || y >= 3*h) 
    {
    
    cout <<"outside";
    }
     else if(x % h == 0 || y % h == 0)
    {
    cout <<"border";
    }
    return result;
    if(x >= 0 ||x <= 2*h || y >=0 || y <= 3*h)
    {
    cout <<"inside";
    }
    return result;
}