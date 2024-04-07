#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int N;
    cin >> N;

    
    string binary =int.to_string(N); 
    reverse(binary.begin(), binary.end());
    
    cout << binary << endl;
    if (N % 2 != 0 ){
        cout << "N is odd." << endl;
    } else {
        cout << "N is even." << endl;
    }

    return 0;
}
