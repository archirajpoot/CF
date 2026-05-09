#include <bits/stdc++.h>
using namespace std;

int petya() {

    string a, b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    for(int i = 0; i < a.size(); i++) {

        if(a[i] < b[i])
            return -1;

        else if(a[i] > b[i])
            return 1;
    }

    return 0;
}

int main() {

    cout << petya();

    return 0;
}