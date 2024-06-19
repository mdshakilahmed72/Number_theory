#include<bits/stdc++.h>
using namespace std;

bool prime(int n){

    for (int i = 2; i < n; i++)
    {
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
