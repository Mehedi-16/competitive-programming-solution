#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int a[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    int A, B;
    cin >> A >> B;

    int total = 0;
    for (int i = A; i <= B; ++i)
    {
        total = total + a[i];
    }

    cout << total << endl;
}
