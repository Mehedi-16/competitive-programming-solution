#include <iostream>
using namespace std;

int main() {
    int n, countA = 0, countD = 0;
    cin >> n;
    char s[n];
    
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        if (s[i] == 'A') {
            countA++;
        }
        else if (s[i] == 'D') {
            countD++;
        }
    }
    
    if (countA > countD) {
        cout << "Anton";
    }
    else if (countA < countD) {
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }

    return 0;
}
