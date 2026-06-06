#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
  vector<int> arr(n);
int sum=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum+=arr[i];
}
int ksum=0;
int count=0;
sort(arr.begin(),arr.end());
for(int i=n-1;i>=0;i--){
    ksum+=arr[i];
        count++;
    if(ksum>sum-ksum){
        cout<<count;
        break;
    }
}
return 0;
}