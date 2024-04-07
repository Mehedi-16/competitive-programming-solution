#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        int n;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {

            if (s[i] == 'D')
            {
                cout << 'U';
            }
            else if (s[i] == 'U')
            {
                cout << 'D';
            }

            else
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
}