// #include <bits/stdc++.h>
// using namespace std;
// // int main(){
// // int n;
// // cin>>n;
// // int arr[n];
// // for(int i=0;i<n;i++){
// //     cin>>arr[i];
// // }
// // int count=1;
// // for(int i=1;i<n;i++){
// //     int k=arr[i-1];
// //     if(arr[i]==k){
// //         continue;
// //     }else {
// //         count++;
// //     }
// // }
// // return 0;
// // }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev, curr;
    cin >> prev;

    int groups = 1;

    for(int i = 1; i < n; i++) {
        cin >> curr;

        if(curr != prev) {
            groups++;
        }

        prev = curr;
    }

    cout << groups;

    return 0;
}