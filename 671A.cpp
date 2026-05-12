#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Point {
    double x, y;
};

double dist(Point a, Point b) {
    return hypot(a.x - b.x, a.y - b.y);
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Point A, B, T;

    cin >> A.x >> A.y
        >> B.x >> B.y
        >> T.x >> T.y;

    int n;
    cin >> n;

    vector<Point> bottle(n);

    double base = 0;

    vector<double> saveA(n), saveB(n);

    for(int i = 0; i < n; i++) {

        cin >> bottle[i].x >> bottle[i].y;

        double dt = dist(T, bottle[i]);

        base += 2.0 * dt;

        saveA[i] = dist(A, bottle[i]) - dt;
        saveB[i] = dist(B, bottle[i]) - dt;
    }

    double ans = base;

    // only A
    for(int i = 0; i < n; i++) {
        ans = min(ans, base + saveA[i]);
    }

    // only B
    for(int i = 0; i < n; i++) {
        ans = min(ans, base + saveB[i]);
    }

    // both A and B
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {

            if(i == j) continue;

            ans = min(ans,
                      base + saveA[i] + saveB[j]);
        }
    }

    cout << fixed << setprecision(12) << ans;

    return 0;
}