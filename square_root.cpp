#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
    if(n<2){
        return false;
    }
    if(n<=3){
        return true;
    }
    if(n%2==0){
        return false;
    }

    for(int i=3; i<=sqrt(n); i=i+2){
        if(n%i==0){
            return false;
        }
      
    }
      return true;
}

int main(){
    int n;
    cin>>n;

    int ans = prime(n); 
    
    if(ans==1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
         
  return 0;        
}