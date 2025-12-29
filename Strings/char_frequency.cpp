#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        int count = 1;
        if(s[i] == ' ') continue;
        for(int j = i + 1; j < s.length(); j++) {
            if(s[i] == s[j]) {
                count++;
                s[j] = ' ';
            }
        }
        cout << s[i] << " : " << count << endl;
    }
    return 0;
}
