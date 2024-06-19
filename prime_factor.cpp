#include<bits/stdc++.h>
using namespace std;

void prime_fact(int n){
       for (int i = 2; i*i <= n; i++)
    {
        
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n=n/i;
            }
            cout<<i<<"^"<<cnt<<",";
        }
       
    }
    if(n>1)cout<<n<<"^"<<1<<endl; 
    cout<<endl;
    

}

int main(){
    int n;
    cin>>n;
    prime_fact(n);
     
 
         
  return 0;        
}