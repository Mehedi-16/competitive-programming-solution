#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int sum = 0,a;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            sum += a;
        }
        long long int p = sqrt(sum);
        if (p * p == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}