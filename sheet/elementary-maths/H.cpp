// brute force apporach 
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int n, t, k, d;
//     cin >> n >> t >> k >> d;
//     int time1=0;
//     int cake1=0;
//     while(cake1<n){
//        time1+=t;
//        cake1+=k;
// }
// int total=0;
// int time=0;
//     while(total<n){
//         time++;
//         if(time%t==0){
//             total+=k;
//         }
//         if(time>d && (time-d)%t==0){
//             total+=k;
//         }
//     }
//     if(time<time1){
//         cout<<"YES";
//     }else{
//         cout<<"NO";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, t, k, d;
    cin >> n >> t >> k >> d;

    // one oven total time
    int batches = (n + k - 1) / k;
    int time1 = batches * t;

    // check before finishing time
    int x = time1 - 1;

    // cakes by first oven
    int cakes1 = (x / t) * k;

    // cakes by second oven
    int cakes2 = 0;

    if(x > d) {
        cakes2 = ((x - d) / t) * k;
    }

    // total cakes
    if(cakes1 + cakes2 >= n)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}