#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    char c;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> c;

            if (c == 'C' || c == 'M' || c == 'Y')
            {
                flag = true;
                break;
            }
        }
    }
    if (!flag)
    {
        cout << "#Black&White" << endl;
    }
    else
    {
        cout << "#Color";
    }
}