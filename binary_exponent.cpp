#include<bits/stdc++.h>
using namespace std;

int main(){
    int base,power,result=1;
    cin>>base>>power;

    while(power!=0){
        
        if(power%2==1){
            result = (base*result);
            power--;
        }else{
            base = base*base;
            power=power/2;
        }
    }
 
 cout<<result;
         
  return 0;        
}