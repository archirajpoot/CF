#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, instruction;
    cin >> a >> instruction;

    int pos = 0;

    for(int i = 0; i < instruction.size(); i++) {
        if(instruction[i] == a[pos]) {
            pos++;
        }
    }

    cout << pos + 1;

    return 0;
}