#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int d=abs(a-b);
        int mx=max(a,max(b,c));
        if (mx>d*2)
        {
            cout <<-1<< endl;
        }
        else
        {
            if (c<=d )
            {
               cout<<d+c<<endl;
            }
            else
            {
                cout<<c-d<<endl;
            }
            
        }
        
    }
}