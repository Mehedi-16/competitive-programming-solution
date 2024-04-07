#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int a, b, c, max_value;
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            max_value = a;
        }
        else if (b > a && b > c)
        {
            max_value = b;
        }
        else
        {
            max_value = c;
        }

        if (a == b && b == c)
        {
            cout << 1 << " " << 1 << " " << 1 << endl;
        }
        else if (a == max_value)
        {
            cout << 0 << " " << max_value - b + 1 << " " << max_value - c + 1 << endl;
        }
        else if (b == max_value)
        {
            cout << max_value - a + 1 << " " << 0 << " " << max_value - c + 1 << endl;
        }
        else if (c == max_value)
        {
            cout << max_value - a + 1 << " " << max_value - b + 1 << " " << 0 << endl;
        }
        else if (max_value == a && max_value == b)
        {
            cout << 1 << " " << 1 << " " << max_value - c + 1 << endl;
        }
        else if (max_value == a && max_value == c)
        {
            cout << 1 << " " << max_value - b + 1 << " " << 1 << endl;
        }
        else if (max_value == b && max_value == c)
        {
            cout << max_value - a + 1 << " " << 1 << " " << 1 << endl;
        }
    }
    return 0;
}
