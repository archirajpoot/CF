#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int bird[n + 1];

    for(int i = 1; i <= n; i++) {
        cin >> bird[i];
    }

    int m;
    cin >> m;

    while(m > 0) {

        int x, y;
        cin >> x >> y;

        int left = y - 1;
        int right = bird[x] - y;

        if(x > 1)
            bird[x - 1] += left;

        if(x < n)
            bird[x + 1] += right;

        bird[x] = 0;

        m--;
    }

    for(int i = 1; i <= n; i++) {
        cout << bird[i] << endl;
    }

    return 0;
}