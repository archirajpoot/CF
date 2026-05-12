#include <bits/stdc++.h>
using namespace std;
int main(){
int k;
int n;
int w;
cin>>k>>n>>w;
int count=0;
for(int i=1;i<=w;i++){
   count+=i*k;
}
if(n<count){
   cout<<count-n;
}else{
   cout<<0;
}
return 0;
}