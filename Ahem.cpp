#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int base=8,power,result=1,s;
    cin>>power;
    while(power!=0){ 
        if(power%2==1){
            result = (base*result)%10;
            power--;
        }else{
            base = (base*base)%10;
            power=power/2;
        }
    }
  
  cout<<result;
         
  return 0;        
}