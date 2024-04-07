#include <iostream>
using namespace std;
int main()
{
    int n, count1 = 0, count2 = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if (count1 > count2)
    {
        cout << "Mishka";
    }
    else if (count1 < count2)
    {
        cout << "Chris";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }
}