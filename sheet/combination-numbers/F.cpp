#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr, arr + n);
int min=arr[0];
int max=arr[n-1];
int count=0;
for(int i=0;i<n;i++){
    if(min==arr[i] || max==arr[i]){
       continue;
    }else{
        count++;
    }
}
cout<<count;



return 0;
}