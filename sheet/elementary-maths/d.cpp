#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    int favorable = 6 - max(x, y) + 1;
    int total = 6;

    int g = __gcd(favorable, total);

    cout << favorable / g << "/" << total / g;

    return 0;
}