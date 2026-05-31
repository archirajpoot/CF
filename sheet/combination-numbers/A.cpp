#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int p[n+1],g[n+1];
for(int i=1;i<=n;i++)
  cin>>p[i];
for(int i=0;i<n;i++)
  {
    int x=p[i];
    g[x]=i;
  }  
for(int i=1;i<=n;i++){
 cout<<g[i]<<" ";
}
return 0;
}