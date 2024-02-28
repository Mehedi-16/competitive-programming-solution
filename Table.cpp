#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;bear
 cin >> n;
    s.resize(n);
    for (int i = 0; i < n; i++) {
     cin >> s[i];
    }
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            count++;
        }
    }
   cout << count;
    return 0;
}