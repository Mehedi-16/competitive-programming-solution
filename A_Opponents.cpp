#include <iostream>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    int count = 0;
    int max = 0;

    for (int i = 0; i < d; i++)
    {
        int arr[n];

        bool flag = false;

        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
            if (arr[j] == 0)
            {
                flag = true;
            }
        }

        if (flag)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        if (max < count)
        {
            max = count;
        }
    }

    cout << max;
}
