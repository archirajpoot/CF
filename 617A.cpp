#include <bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
int move;
if(x%5==0){
move=x/5;
}else{
   move=(x/5)+1; 
}
cout<<move;
return 0;
}