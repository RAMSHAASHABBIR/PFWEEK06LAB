#include <iostream>
#include <cmath>
using namespace std;
int checktime(int hour,int min,int arrivalhour,int arrivalmin);
main()
{
    int hour;
    int min;
    int arrivalhour;
    int arrivalmin;
    float ans1;
    cout <<"exam starting hour:";
    cin >> hour;
    cout << "exam starting min:";
    cin >> min;
    cout << "student arrival hour:";
    cin >> arrivalhour;
    cout << "student arrival min:";
    cin >> arrivalmin;
   ans1 = checktime(hour,min,arrivalhour,arrivalmin);
}
int checktime(int hour,int min,int arrivalhour,int arrivalmin)
{
int result1;
int result2;
float ans1;
result1 = (hour*60) + min;
result2 = (arrivalhour*60) + arrivalmin;
if(result2 > result1)
{
ans1 = result2 - result1;
ans1 = ans1/60;
int ans2 = floor(ans1);
ans1 = ans1 - ans2;
ans1 = ans1*60;
cout <<"late" << ans2 << ":" << ans1 << "after the start";
}
if(result1 > result2)
{
ans1 = result1 - result2;
ans1 = ans1/60;
int ans2 = floor(ans1);
ans1 = ans1 - ans2;
ans1 = ans1*60;
cout <<"early" << ans2 <<":"<< ans1 << "before the start";
}
if(result1 = result2)
{
    cout <<"on time";
    return 0;
}
return ans1;
}