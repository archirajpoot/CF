#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int upcase=0;
int lowcase=0;
for(int i=0;i<s.size();i++){
    if(s[i]==toupper(s[i])){
        upcase++;
    }else{
        lowcase++;
    }
}
if(lowcase>=upcase){
    for(int i=0;i<s.size();i++){
        cout<<(char)tolower(s[i]);
    }
}
else{
      for(int i=0;i<s.size();i++){
        cout<<(char)toupper(s[i]);
    }
}
return 0;
}