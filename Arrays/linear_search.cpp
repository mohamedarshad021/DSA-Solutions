#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(a[i] == key) {
            cout << "Found at index " << i;
            return 0;
        }
    }
    cout << "Not found";
    return 0;
}
