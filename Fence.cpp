#include <iostream>
using namespace std;

int main()
{
    int n, h, count1 = 0, count2 = 0;
    cin >> n >> h;
    int s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] <= h)
        {
            count1++;
        }
        else
        {
            count2 += 2;
        }
    }

    int sum = count1 + count2;
    cout << sum << endl;

    return 0;
}
