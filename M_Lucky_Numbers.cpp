#include <iostream>
using namespace std;

int main()
{
    int a, b, c = -1;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        int l = 0;
        int num = i;
        while (num)
        {
            if (num % 10 != 4 && num % 10 != 7)
            {
                l++;
                break;
            }
            num /= 10;
        }
        if (l == 0)
        {
            cout << i << " ";
            c++;
        }
    }
    if (c == -1)
    {
        cout << -1;
    }
}
