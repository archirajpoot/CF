#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
char ch[n];
for(int i=0;i<n;i++){
    cin>>ch[i];
}
int countA=0;
int countD=0;
for(int i=0;i<n;i++){
 if(ch[i]=='A'){
    countA++;
 }
 else{
    countD++;
 }
}
if(countA==countD){
    cout<<"Friendship";
}else if(countA<countD){
    cout<<"Danik";
}else{
    cout<<"Anton";
}


return 0;
}