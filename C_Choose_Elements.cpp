#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long int n, k;
    cin >> n >> k;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    long long int maxsum = 0;
    for (int i = n - 1; i >= max(n - k, 0LL); --i) {
        if (arr[i] > 0)
            maxsum += arr[i];
    }
    cout << maxsum << endl;
}
