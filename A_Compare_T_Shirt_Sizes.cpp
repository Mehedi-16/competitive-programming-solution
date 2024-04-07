#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string a, b;

    while (t--)
    {
        cin >> a >> b;
        for (int i = 0; i < max(a.size(), b.size()); i++)
        {

            if (a.size() > b.size() || a[i] == 'L' || a[i] == 'M')
            {
                cout << ">" << endl;
            }
            else if (a.size() < b.size())
            {
                cout << "<" << endl;
            }
            else
            {
                cout << "=" << endl;
            }
        }
    }
}