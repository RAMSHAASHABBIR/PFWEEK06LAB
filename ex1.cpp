#include <iostream>
using namespace std;
int isgreater(int n1,int n2,int n3);
main(){
    int n1;
    int n2;
    int n3;
    int result;
   result = isgreater(n1,n2,n3);


}
int isgreater(int n1,int n2,int n3)
{
    int result;
    cout <<"enter a num:";
    cin >> n1;
    cout <<"enter a no:";
    cin >> n2;
    cout <<"enter a no:";
    cin >> n3;
    if(n1 > n2 && n1 > n3)
    {
        cout <<"greater no is:" << n1;

    }
    if(n2 > n3 && n2 > n3)
    {
        cout <<"greater no:" << n2;
    }
    if(n3 > n1 && n3 > n1)
    {
        cout <<"greater no:" << n3;
    }
    return result;
}

