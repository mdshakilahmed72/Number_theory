#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int>s;
	long long int n,k;
	cin>>n>>k;
	for(int i=1; i<=sqrt(n); i++){
	    int x=i;
	    int y = n/i;
	    s.push_back(x);
	    s.push_back(y);
	}

	if(k<s.size()){
	    cout<<"-1";
	}else{
	    cout<<s[k+1];
	}
	

}
