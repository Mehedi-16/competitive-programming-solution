#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (a==1)
        {
            cout<<2<<endl;
        }
        else if (a%3==0)
        {
            cout<<a/3<<endl;
        }
        else
        {
            cout<<(a/3)+1<<endl;
        }
        
    }
}