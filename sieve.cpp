#include<bits/stdc++.h>
using namespace std;

int solve(int n){
    int ara[n];
    memset(ara,0,sizeof(ara));

    for (int i = 2; i*i <=n; i++)
    {
        if(ara[i]==0){

                for (int j = i*i; j <=n; j = j+i)
                {
                   ara[j] =1;
                }
                
        }
    }

    for (int i = 2; i <=n; i++)
    {
       if(ara[i]==0){
        cout<<i<<" ";
       }
    }
    
    
}

int main(){
    int n;
    cin>>n;
    solve(n); 
 
         
  return 0;        
}