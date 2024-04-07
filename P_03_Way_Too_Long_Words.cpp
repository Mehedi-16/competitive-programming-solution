#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (s.length() > 10)
        {
            for (int i = 0; i < s.size(); i++)
            {
                cout << s[0] << s.size() - 2 << s[s.size() - 1] << endl;
                break;
            }
        }
        else
        {
            cout << s << endl;
        }
    }
}