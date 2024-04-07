#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '-')
        {
            count++;
        }
    }
    if (s[a] == '-' && count == a + b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}
