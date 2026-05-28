#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int k;
cin>>k;
string s;
for(int i=0;i<n;i++){
 s+=('a'+(i%k));
}
cout<<s;

return 0;
}