#include <iostream>
using namespace std;

int main()
{
    int n,m,k,count=0;
    cin>>n>>m>>k;
    if (n==2 && k==1)
    {
        count++;
    }
    else if (n==2 && m==1 && k==1)
    {
        count++;
    }
    else if (n==1 && m==1 && k==1)
    {
        count++;
    }
    cout<<count<<endl;
    
}