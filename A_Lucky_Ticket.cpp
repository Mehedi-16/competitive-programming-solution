#include <iostream>
using namespace std;
int main()
{
    int n, count = 0, sum = 0, sum2 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 4 || a[i] == 7)
        {
            count++;
        }
    }
    cout << count <<endl;
    if (count == n)
    {
        for (int i = 1; i <= n / 2; i++)
        {
            sum = sum + a[i];
        }
        for (int i = n / 2; i <= n; i++)
        {
            sum2 = sum2 + a[i];
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    if (sum == sum2)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}