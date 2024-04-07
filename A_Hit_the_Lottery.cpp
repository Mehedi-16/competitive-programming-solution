#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a=n/100;
   int l=n%100;
   a+=l/20;
    l=l%20;
    a+=l/10;
    l=l%10;
    a+=l/5;
    l=l%5;
    a+=l/1;
    l=l%1;
    cout<<a<<endl;
}
