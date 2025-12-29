#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin,s);
    for(char &c : s)
        if(c>='a' && c<='z')
            c = c - 32;
    cout<<s;
    return 0;
}
