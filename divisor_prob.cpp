
#include <bits/stdc++.h>
using namespace std;
set<int>s;
int main() {
    int n;
    cin>>n;
    
    for(int i=1; i<=sqrt(n);i++){
        if(n%i==0){
            int x = i;
            int y = n/i;
            s.insert(x);
            s.insert(y);
        }
        
    }
    
    cout<<s.size()<<endl;
    for(auto it:s){
        cout<<it<<" ";
    }

    return 0;
}