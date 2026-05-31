
#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int hired=0;
int untreated=0;
for(int i=0;i<n;i++){
    if(arr[i]>0){
        hired+=arr[i];
    }else{
        if(hired==0){
            untreated++;
        }else{
            hired--;
        }
    }
}
cout<<untreated;
return 0;
}