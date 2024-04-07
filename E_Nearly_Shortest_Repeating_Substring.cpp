#include <iostream>
#include <string>
using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int prefix_length = s.rfind(s[0]) + 1;
        int repeated_length = n - prefix_length;
        cout << min(repeated_length, prefix_length) << endl;
    }
}

int main() {
    solve();
    return 0;
}
