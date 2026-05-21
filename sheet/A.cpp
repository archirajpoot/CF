#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
 cin>>arr[i];   
}
bool turn=true;
int seerja=0;
int deja=0;
int i=0;
int j=n-1;
while(i<=j){
    int choosen;
    if(arr[i]<arr[j]){
       choosen=arr[j];
       j--;
    }  
    else{
          choosen=arr[i]; 
          i++;
        }
         if(turn){
        seerja+=choosen;
    }else{
        deja+=choosen;
    }
    turn=!turn;
    
      
}
 cout << seerja << " " << deja;
return 0;
}