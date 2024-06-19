#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
///matrix multiplication
void mul(ll a[][101],ll b[][101],ll dim){
  ll res[dim][dim];

  for (ll i = 0; i < dim; i++)
  {
    for (ll j = 0; j < dim; j++)
    {
      res[i][j] = 0;
      for (ll k = 0; k < dim; i++)
      {
        ll x = a[i][k]*b[k][j];
        res[i][j] = res[i][j] + x;
      }
      
    }
    
  }


  for (int i = 0; i < dim; i++)
  {
    for (int j = 0; j < dim; j++)
    {
      a[i][j] = res[i][j];
    }
    
  }
  
  
}



int main(){
     ll tc;
     cin>>tc;

     while(tc--){
      ll dim,p;
      cin>>dim>>p;
      ll ara[100][100],ar[100][100];
////Matrix Input section
      for (ll i = 0; i < dim; i++)
      {
        for (ll j = 0; j < dim; j++)
        {
         cin>>ara[i][j];
        }
        
      }
///result matrix 
 for (ll i = 0; i < dim; i++)
      {
        for (ll j = 0; j < dim; j++)
        {
         if(i==j){
          ar[i][j] = 1;
         }else{
          ar[i][j] = 0;
         }
        }
        
      }

///power section

while(p){
  if(p%2==0){
      mul(ar,ara,dim);
      p--;
  }else{
    mul(ara,ara,dim);
    p=p/2;
  }
}












      
     }
 
         
  return 0;        
}