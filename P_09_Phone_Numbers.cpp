#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if (n%11==0)
        {
            if (s[i]=='8')
            {
                count++;
            }
        }
        else
            {
                cout<<0;
            }
        
        
    }
    cout<<count;
}
