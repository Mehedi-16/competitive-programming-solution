#include<bits/stdc++.h>
using namespace std;
bool islower(char c) 
{ 
    return(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y');
}
int main()
{
    string s,ans;
    cin>>s;
    for (auto u:s) 
    {
       char c=tolower(u) ;
       if(!islower(c))
       {
        ans+='.';
        ans+=c;
       }
    }
    cout<<ans<<endl;
    return 0;
    
}