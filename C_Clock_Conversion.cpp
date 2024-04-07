#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int t ;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    int hour=stoi(s.substr(0, 2));
    int min=stoi(s.substr(3, 2));
    string period;
    if(hour>=12)
    {
        period="PM";
        if(hour>12)
        {
            hour=hour-12;
        }
    }
    else
    {
        period="AM";
        if(hour==0)
        {
            hour=12;
        }
    }
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<min<<" "<<period<<endl;

}
}