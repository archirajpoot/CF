#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
vector<char> arr;
for(int i=0;i<s.size();i=i+2){
    arr.push_back(s[i]);
}
sort(arr.begin(),arr.end());
for(int i=0;i<arr.size();i++){
    cout<<arr[i];
    if(i!=arr.size()-1){
        cout<<"+";
    }
}
return 0;
}