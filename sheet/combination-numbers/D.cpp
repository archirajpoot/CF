#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n+1,0);
    int need=n;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        arr[x]=1;
        while(need>=1 && arr[need]){
            cout<<need<<" ";
            need--;
        }
        cout<<endl;
    }
    return 0;
}
