#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
while (n--)
{ 
    int i,j;
    cin>>i;
    cin >>j;
    if (i%j==0)
    {
       cout<<0;
    }
    else
    {
        cout<<j-i%j<<endl;
            }
    
    
}

}