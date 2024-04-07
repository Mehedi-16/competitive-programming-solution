#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int count = 0 ;
        string s1;
        cin >> s1;
        string s = "codeforces";

        for (int i = 0; i < 10; i++)
        {
            if (s[i] != s1[i])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}