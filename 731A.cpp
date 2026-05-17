#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int count=0;
char current='a';
for(int i=0;i<s.size();i++){
  int moves=abs(current-s[i]);
  count+=min(moves,26-moves);
  current=s[i];
}
cout<<count;
return 0;
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i.host==j.guest){
            i.guest==
        }
    }
}