#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;

while(t--)
{
int n;
cin>>n;
int odd=0,even=0;
n=2*n;
for (int i = 0; i <n; i++)
{
   int x;
   cin>>x;
   if(x%2==0)
   even++;
   else
   odd++;
}
if (even==odd)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
}