#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;
    // one oven time
    int cakes = 0;
    int time1 = 0;
    while(cakes < n) {
        time1 += t;
        cakes += k;
    }
    // two ovens simulation
    int total = 0;
    int time = 0;
    while(total < n) {
        time++;
        // first oven
        if(time % t == 0) {
            total += k;
        }
        // second oven
        if(time > d && (time - d) % t == 0) {
            total += k;
        }
    }
    if(time < time1)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}