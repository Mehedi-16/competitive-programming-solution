#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int b = n - 1;
        if (k == 0)
        {
            cout << n << endl;
        }

        else if (k >= b)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
}