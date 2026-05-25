#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int b;
cin>>b;
int d;
cin>>d;
int sum=0;
int count=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    if(x<=b){
        sum+=x;
        if(d<sum){
            count++;
            sum=0;
        }
    }
}
cout<<count<<endl;
return 0;
}