#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[4];
for(int i=0;i<4;i++){
    cin>>arr[i];
}
string s;
int count=0;
for(int i=0;i<s.size();i++){
  int strip = s[i] - '0';   // converts char '1' → int 1
count += arr[strip - 1];  // adjust to 0-based index
}
return 0;
}