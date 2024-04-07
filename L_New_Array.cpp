#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    b.insert(b.end(), a.begin(), a.end());

    for (int i = 0; i < 2 * n; ++i) {
        cout << b[i];
        if (i != 2 * n - 1)
            cout << " ";
    }
    cout << endl;

    return 0;
}
