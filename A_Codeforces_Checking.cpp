#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string str = "codeforces";
    cin >> t;
    while (t--)
    {
        char c;
        cin >> c;
        bool flag = false;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == c)
            {
             flag = true;
             break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }}

