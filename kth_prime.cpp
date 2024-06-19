#include<bits/stdc++.h>
using namespace std;
bool ara[90000001];
int n=9000000;
vector <int>v;
void solve(){

    for (int i = 2; i*i <=n; i++)
    {
        if(ara[i]==false){
            for (int j = i*i; j <=n; j=j+i)
            {
                ara[j] = true;
            }
            
        }
    }

    for (int i = 2; i <=n; i++)
    {
        if(ara[i]==false){
            v.push_back(i);
        }
    }
    
    
}
int main(){
    solve();
     int tc;
     cin>>tc;

     while(tc--){
        int n;
        cin>>n;
        cout<<v[n-1]<<endl;

     }
 
         
  return 0;        
}